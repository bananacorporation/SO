#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
#include<signal.h>
#include<unistd.h>

void ff(int sig)
{
printf("\nterminated\n");
exit(0);
}

int main()
{
signal(SIGINT, ff);
int pid = fork();
while(1)
	{
	if(pid==0)
		{
		printf("I'm child\n");
		sleep(1);
		}
	}
exit(1);
}
