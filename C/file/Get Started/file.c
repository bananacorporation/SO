#include <stdio.h>
int main (){
	//operare sui file
        FILE*fp;
	//creazione stringa
   	char c[100];
	//aprire un file in modalita di scritta
        fp=fopen("dati.txt","w");
	//scrivere "ciao" nel file fp
        fprintf(fp,"ciao");
	//chiusura file
	fclose (fp);
        fp=fopen ("dati.txt","r");
	//finche non finisce il file
        while  (!feof(fp))
        {
		//leggi dal file fp una scringa e scrivila in c
		fscanf(fp,"%s", c);
		//stampa la variabile presa
                printf ("%s\n",c);
        }
	//schiudi il file
	fclose (fp);
}

