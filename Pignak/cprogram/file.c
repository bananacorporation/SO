#include<stdio.h>

int main()
{
FILE*fp;
fp = fopen("scrivi.txt","w");

fprintf(fp,"ciao\n");

fclose(fp);
}
