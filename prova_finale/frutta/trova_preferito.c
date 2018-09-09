#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int binario(char nome_file[], char frutto[])
{
char p[30],f1[30],f2[30],f3[30];
FILE*fp1,*fp2;
int count=0;
fp1=fopen("persone_frutta.txt","r");
fp2=fopen(nome_file,"w");
while(!feof(fp1))
	{
	fscanf(fp1,"%s%s%s%s",p,f1,f2,f3);
	if(((strcmp(frutto,f1)==0)||(strcmp(frutto,f2)==0)||(strcmp(frutto,f3)==0)))
		{
		fprintf(fp2,"[%s][%d]\n",p,1);
		count++;
		}
	else
		{
		fprintf(fp2,"[%s][%d]\n",p,0);
		}
	}
fclose(fp2);
fclose(fp1);
}

int main()
{
int c;
char frutto[30];
printf("che frutto vuoi cercare?\n");
scanf("%s",frutto);
printf("\n");
c=binario("trova.txt",frutto);
printf(c);
system("cat trova.txt");
}
