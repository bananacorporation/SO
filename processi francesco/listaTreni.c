#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void check(char *t) {
	char tmp[2];
	int verifica = 0,i;
	strncpy(tmp,t,2);
	if (strcmp(tmp,"ic") || strcmp(tmp,"es") || strcmp(tmp,"rg")) {
       		for (i =2; i<6;i++) {
			if (t[i]>='0' && t[i]<='9') verifica = 1;
			else {
			       	verifica = 0;
				break;
			}
		}
	}
	
	if (verifica==1) printf(" %s VALIDO \n",t);
	else printf(" %s NON VALIDO \n",t);
	//tmp[2]='\0';
	//printf("------> %s \n",tmp);
	//printf("stringa completa : %s \n",t);
	}

int main(int args, char* treni[]){
       int pid,i,status;
       for (i=1; i<args; i++){
	      pid = fork();
	      if (pid <0) printf("errore"); 
	      if (pid == 0) {
		      check(treni[i]);
		      exit (0);
	      }
	      else {
		      wait(&status);
		     }
       }
}	       
