#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE*fp;
fp=fopen("pppp","r");

char testo[5];

printf("sto leggendo\n");
fscanf(fp,"%s",testo);

printf("\n %s",testo);

fclose(fp);
}
