#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
int pid,i,status;
for(i=0;i<10;i++)
{
	pid = fork();
	switch(pid)
	{
	case 0:
		sleep(2);
		printf("sono il filgio - %d\n",i+1);
		sleep(2);
		exit(101+i);
		break;
	case -1:
		printf("errore\n");
		break;
	}
}

printf("mi metto in atteso che i figli terminano\n");

for(i=0;i<10;i++)
{
	wait(&status);
	printf("terminato filgio %d\n",WEXITSTATUS(status));
}
}
