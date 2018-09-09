#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>

void ignora(int sig)
{
char c;
signal(sig, SIG_IGN);
printf("\n\n pid -> %d\n\n",getpid());
printf("vuoi terminare? y/n\n");
//c=getchar();
scanf("%c",&c);
if(c=='y' || c=='Y')
	exit(0);
else
	signal(SIGINT, ignora);
}

int main()
{
int pid,status;
pid=fork();

if(pid==0)
	{
	while(1){
		signal(SIGINT, ignora);
		printf("figlio ");
		printf("--> %d\n",getpid());
		pause();
		}
	}
if(pid>0)
	{
	signal(SIGINT, SIG_IGN);
	wait(&status);
	exit(0);
	}
}
