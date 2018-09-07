#include<stdio.h>

int main()
{
FILE*fp;
fp=fopen("scrivi.txt","r");
char s[10];

fscanf(fp,"%s",s);
printf("%s",s);

fclose(fp);

}
