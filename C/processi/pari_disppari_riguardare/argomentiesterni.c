#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<signal.h>

#define max 4

void gestore_att(int sig)
{
printf("%d: sono stato attivato\n",getpid());
return;
}

void figlio(char *com)
{
int miopid;
miopid=getpid();
if((miopid%2)==0)
	signal(SIGUSR1, gestore_att);
else
	signal(SIGUSR2, gestore_att);
pause();
execlp(com,com,(char *)0);
}

int main(int argc, int *argv[])
{
int ppid,pid[max],pf;
int status,i;
if(argc==1)
	{
	printf("sintassi sbagliata\n");
	exit(1);
	}
ppid=getpid();

for(i=0;i<argc-1;i++)
	{
	pid[i]=fork();
	if(pid[i]==0)
		{
		figlio(argv[i+1]);
		exit(0);
		}
	else
		printf("%d: creato figlio %d\n", ppid, pid[i]);
	}
if((ppid%2)==0)
	for(i=0;i<argc-1;i++)
		kill(pid[i],SIGUSR1);
else
	for(i=0;i<argc-1;i++)
		kill(pid[i],SIGUSR2);
for(i=0;i<argc-1;i++)
	{
	pf=wait(&status);
	if((char)status == 0)
		printf("temrinato %d con stato %d\n",pf,status);
	else
		printf("temrinato %d con involontariamnete (segnale %d)\n",pf,status);
	}
exit(0);
}
