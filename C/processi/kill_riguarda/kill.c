#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
int cont=0;
int pid1=fork();

if(pid1==0)
	{
	while(1)
		{
		printf("sono il figlio");
		sleep(1);
		}
	}

//sleep(2);
//kill(pid1,SIGSTOP);
//sleep(2);
//kill(pid1,SIGCONT);
//sleep(10);
//return 0;
}
