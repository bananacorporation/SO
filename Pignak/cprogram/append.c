#include<stdlib.h>
#include<stdio.h>

int main()
{
FILE*fp;
fp=fopen("pppp","a");

fprintf(fp,"eccomi\n");

fclose(fp);
}
