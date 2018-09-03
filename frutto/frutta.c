#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char stringa[30];

int creaBinario (stringa nome_file, stringa frutto) {
	FILE *lettura;
	FILE *scrittura;
	stringa nome,f1,f2,f3;
	int cont=0;
	lettura = fopen(nome_file,"r+");
	scrittura = fopen("frutto_preferito.dat","w+");
	while(!feof(lettura)){
		int verifica = 0;
		fscanf(lettura,"%s %s %s %s",nome,f1,f2,f3);
		fprintf(scrittura,"[%s] ",nome);
		if (strcmp(frutto,f1) == 0 || strcmp(frutto,f2) == 0 || strcmp(frutto,f3) == 0) {
			verifica = 1;
			cont++;
		}
		fprintf(scrittura,"[%d]\n",verifica);
	}
	return cont;
}
int main()  {
	int n;
	n=creaBinario("persone_frutta.txt","mela");
	printf("------------>%d",n);
	return 0;
}