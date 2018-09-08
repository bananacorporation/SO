#include<stdio.h>

int main()
{
FILE*fp;

fp=fopen("pppp","w");

printf("scrivi");
fprintf(fp,"ciao2");

fclose(fp);
}
