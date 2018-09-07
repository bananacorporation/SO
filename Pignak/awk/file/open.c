#include<stdio.h>
#include<stdlib.h>

int main()
{
char c[20];
int a;
FILE*fp;
fp=fopen("oo.txt","r");
fscanf(fp,"%d",a);
printf("%d:",a);
fclose(fp);
}
