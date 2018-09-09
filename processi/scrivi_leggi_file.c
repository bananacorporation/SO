#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int pid;
	FILE *f;
	char c;
	f =fopen("test.txt","w+");
	pid = fork();
	if (pid==0) {
		printf("[figlio] attendo 4 secondi \n");
		sleep(4);
		printf("OFFSET : %ld \n",ftell(f));
		fseek(f,0,SEEK_SET);
		while(!feof(f)){
			fscanf(f,"%c",&c);
			printf("%c",c);
		}
		//system("cat test.txt");
		printf("[figlio] chiudo il file\n");
		fclose(f);
		exit (0);
	}
	else {
		printf("[padre] Inserimento stringa nel file\n"); 
		fprintf(f,"Sono il padre");
		printf("OFFSET : %ld\n",ftell(f));
		printf("[padre] chiudo il file e lo cancello\n");
		fclose(f);
		remove ("test.txt");
	}
}
