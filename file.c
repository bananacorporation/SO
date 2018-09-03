#include <stdio.h>
int main (){
        FILE*fp;
   	char c[100];
        fp=fopen("dati.txt","w");
        fprintf(fp,"ciao");
	fclose (fp);
        fp=fopen ("dati.txt","r");
        while  (!feof(fp))
        {
		fscanf(fp,"%s", c);
                printf ("%s\n",c);
        }
	fclose (fp);
}

