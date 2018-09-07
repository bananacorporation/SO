#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE*fp = fopen("somme.txt","w+");

fprintf(fp,"%d+%d\n",10,20);
fprintf(fp,"%d+%d\n",30,40);
fprintf(fp,"%d+%d\n",50,60);
fprintf(fp,"%d+%d\n",70,80);
fprintf(fp,"%d+%d\n",90,100);

fclose(fp);
}
