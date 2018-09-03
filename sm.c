#include <stdio.h>
#include<string.h>
int main (){
FILE*fp;
fp=fopen("eser","w");
char c[100];
int r;
printf("Inserisci numero: ");
scanf("%d",&r);
int x;
while (r>0){
        printf ("\nInserisci nome: ");
        scanf("%s",c);
        printf("Inserisci matricola: ");
        scanf ("%d",&x);
        fprintf(fp,"%s %d\n",c,x);
        r=r-1;
}
fclose (fp);
fp=fopen ("eser","r+");
printf("\nInaerisci nome da controllare: ");
char nome [100];
scanf ("%s",nome);
long pos;
while (!feof(fp)){
        pos=ftell(fp);
        fscanf(fp,"%s%d",c,&x);
        if (strcmp(nome,c)==0)
                {
                fseek (fp,pos,0);
                x=x+1;
                fprintf (fp,"%s %d\n",c,x);
                }
        printf ("%s %d\n",c,x);
}
fclose (fp);
}
