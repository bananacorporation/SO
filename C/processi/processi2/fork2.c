#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>

int main()
{
int pid,status,x=0;

pid=fork();

switch(pid) //controllo sul pid
{
case 0: //sono il figlio
	x=10; //assegno 10 ad x
	printf("%d\n",x); //stampo il valore di x
	exit(x); //chiudo con il ritorno di x
	break;
case -1: //errore
	printf("errore\n");
	exit(2);
	break;
default: //sono il padre
	wait(&x); //attendo la modifica di x
	//modifico la vriabile di x dalla locazione al suo contenuto
	printf("sono il padre e stampo %d - %d\n",WEXITSTATUS(x), WEXITSTATUS(status)); 
	break;
}
}
