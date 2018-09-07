#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE*fp;
fp=fopen("pppp","w");
fseek(fp,1,1);
ftell(fp);
fprintf(fp,"HOLAAAAA\n");
fclose(fp);
}
