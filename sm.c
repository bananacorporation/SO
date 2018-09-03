#include <stdio.h>
#include<string.h>

int main (){
        //punatre ad un file
        FILE*fp;
        //apertura file
        fp=fopen("eser","w");
        char c[100];
        int r;
        //inserisci quante stringe vuoi aggiungere
        printf("Inserisci numero: ");
        scanf("%d",&r);
        int x;
        //creazione file con r aggiunte
        while (r>0){
                printf ("\nInserisci nome: ");
                scanf("%s",c);
                printf("Inserisci matricola: ");
                scanf ("%d",&x);
                fprintf(fp,"%s %d\n",c,x);
                r=r-1;
        }
        //chiusura file
        fclose (fp);
        //riapro il file
        fp=fopen ("eser","r+");
        //la stringa da cercare
        printf("\nInaerisci nome da controllare: ");
        char nome [100];
        scanf ("%s",nome);
        long pos;
        //finche il fil enon è finito
        while (!feof(fp)){
                //salvo la posizione con ftell (restituisce un long)
                pos=ftell(fp);
                //leggo il file
                fscanf(fp,"%s%d",c,&x);
                //se le stringe coincidono la sostiutisco l'intero con l'intero+1
                if (strcmp(nome,c)==0)
                        {
                        //mi sposto nella posizione pos contando da 0 nel file fp
                        fseek (fp,pos,0);
                        x=x+1;
                        //sovrascrivo quella stringa
                        fprintf (fp,"%s %d\n",c,x);
                        }
                printf ("%s %d\n",c,x);
        }
        //chiud il file
        fclose (fp);
}
