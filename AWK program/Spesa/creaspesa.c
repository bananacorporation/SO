#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE*fp;
fp=fopen("elencospesa.txt","w+");

fprintf(fp,"%d %s\n",10,"banana");
fprintf(fp,"%d %s\n",20,"mela");
fprintf(fp,"%d %s\n",30,"limone");
fprintf(fp,"%d %s\n",30,"limone");


printf("ben fatto\n");
fclose(fp);
}
