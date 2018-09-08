#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
int pid,status;
char p1[100],p2[30],p3[30];

FILE*fp = fopen("file.txt","w+");

printf("----------------[padre] inserimento stringa nel file\n");

pid=fork();
switch(pid)
{
case 0:
	sleep(4);
	printf("vecchia posizione nel file -->%d\n",ftell(fp));
	fseek(fp,0,0);
	printf("nuova pisizinoe nel file -->%d\n", ftell(fp));
	printf("leggo il file\n");
	//fprintf(fp,"sono il filgio\n");
	while(!feof(fp))
	{
	fscanf(fp,"%s",p1);
	printf("%s-",p1);
	}
	fclose(fp);
	//system("cat file.txt");
	exit(0);
break;
case -1:
	printf("erroee\n");
break;
default:
	printf("[padre] inserimento stringa nel file\n");
	fprintf(fp,"sono il padre\n");
	printf("%d\n",ftell(fp));
//	wait(&status);
	fclose(fp);
	remove("file.txt");
	//printf("----------\n");
	//system("cat file.txt");
	exit(0);
break;
}
}
