#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
FILE*fp;

int giorno;
long pos;
char me[10];
char mese[15];

fp=fopen("elenco","r+");

printf("inserisci il tuo mese\n");
scanf("%s",me);

while(!feof(fp))
{
pos=ftell(fp);
fscanf(fp,"%s %d",mese,&giorno);
printf("%s %d",mese,giorno);
if(strcmp(me,mese)==0)
{
	giorno++;
	fseek(fp,pos,0);
	fprintf(fp,"%s %d\n",me,giorno);	
}
}

fclose(fp);
}
