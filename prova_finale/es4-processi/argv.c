#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

void gest(int sig)
{
if(sig==SIGUSR1)
	printf("sono stato attivato --> %d\n",getpid());
else
	printf("non sono stato attivato --> %d\n",getpid());
exit(0);
}

int main(int argc, char *argv[])
{
int n = atoi(argv[1]);
int pid[10],pf,i,status;
char r[30];

if(argc==1)
	{
	printf("sbagliato inserimento\n");
	exit(0);
	}

for(i=0;i<n;i++)
	{
	pid[i]=fork();
	if(pid[i]==0)
		{
		signal(SIGUSR1, gest);
		signal(SIGUSR2, gest);
		pause();
		}
	if(pid[i]>0)
		{
		printf("creato processo filgio %d\n",pid[i]);
		printf("vuoi attivarlo?y/n\n");
		scanf("%s",r);
		if((r=='y') || (r=='Y'))
			kill(pid[i],SIGUSR1);
		else
			kill(pid[i],SIGUSR2);
		wait(&status);
		}
	}
exit(0);
}
