#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

FILE *fp, *fr;

fp=fopen("voti.txt","r");
char stud[30];
char file[30];
char concat[30];
char fi[30] ="file";
//char voto[30]="7";
char voto[30];
while(!feof(fp)){
	strcpy(file,fi);
	printf("%s\n",file);
	fscanf(fp,"%s %s",stud,voto);
	strcat(file,voto);
	printf("%s\n",file); //concatenazione tra la parola file e il voto
	fr=fopen(file,"w");	
	fprintf(fr,"%s %s",stud,voto);
 	fclose(fr);
}
fclose(fp);
}
