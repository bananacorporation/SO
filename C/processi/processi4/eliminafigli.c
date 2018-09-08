#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int main()
{
int pid,i,status,x=10;
printf("----------------------\n");
for(i=0;i<3;i++)
	{
	pid=fork();
	switch(pid)
	{
	case 0:
		printf("sono il filgio -> %d - figlio di %d\n",getpid(),getppid());
		x=100;
		printf("il mio x è = %d\n",x);
		exit(x);
		break;
	case -1:
		printf("errore\n");
		break;
	}
}

sleep(2);
printf("----sono il padre **%d** e attendo i miei figli----------\n",getpid());


for(i=0;i<3;i++)
	{
	wait(&status);
	printf("ha finito il figlio %d - %d - %d\n", status,WEXITSTATUS(status), (status/256));
	}
printf("----------------------");	
}
