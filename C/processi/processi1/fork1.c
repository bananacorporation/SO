#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main()
{
int pid; //id del processo
int status; //status per la chiusura dei processi
pid = fork(); //creo un figlio
if(pid==0) //se sono il figlio
	{
	sleep(1);
	printf("sono il figlio\n");
	printf("%d\n",getpid());
	exit(1); //esco con il segnale 1
	}
if(pid<0)
	{
	printf("errore\n");
	exit(2); //esco con il segnale 2
	}
if(pid>0)
	{
	wait(&status); //attendo che si interrompa 1 processo
	sleep(1);
	printf("sono il padre\n");
	exit(3); //esco con il segnale 3
	}
}
