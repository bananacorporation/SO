#include<stdio.h>
#include<stdlib.h>

int main()
{
char s1[20], s2[20];
int r1, r2;
FILE*fp,*fn;
fp = fopen("partite.txt","r");
fn = fopen("punteggi.txt","w+");

while(!feof(fp))
{
fscanf(fp, "%s%s%d%d",s1,s2,&r1,&r2);
//fprintf(fn, "%s %s : %d-%d\n",s1,s2,r1,r2);
if(r1>r2)
}

fclose(fn);
fclose(fp);
}
