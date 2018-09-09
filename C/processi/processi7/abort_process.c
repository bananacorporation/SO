#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main()
{
int pid,status;
pid=fork();
if(pid==0)
	{
	printf("sono il filgio\n");
	exit(7);
	}
if(pid<0)
	{
	printf("err\n");
	exit(10);
	}
if(pid>0)
	{
	wait(&status);
	printf("sono il padre e stampo lo status \n --%d--\n",status);
	}

if (WIFSIGNALED(status))
printf("abnormal termination, signal number = %d\n", WTERMSIG(status));


pid=fork();
if(pid==0)
	{
	printf("sono il filgio\n");
	abort();
	}
if(pid<0)
	{
	printf("err\n");
	exit(10);
	}
if(pid>0)
	{
	wait(&status);
	printf("sono il padre e stampo lo status \n --%d--\n",status);
	}
if (WIFSIGNALED(status))
	printf("abnormal termination, signal number = %d\n", WTERMSIG(status));


}
