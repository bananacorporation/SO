#include<stdlib.h>
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main()
{
int pid,status,x=0;

pid = fork();

switch(pid)
{
case 0:
	printf("sono il figlio\n");
	sleep(5);
	kill(getppid(),SIGKILL);
	printf("sono morto\n");
	break;
case 1:

	break;
default:
	printf("sono il padre\n");
	kill(pid,SIGKILL);
	break;
}
}
