#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE*fp;
fp=fopen("elenco","w+");

fprintf(fp,"%s %d\n","a", 1);
fprintf(fp,"%s %d\n","b", 2);
fprintf(fp,"%s %d\n","c", 3);
fprintf(fp,"%s %d\n","d", 4);

fclose(fp);
}
