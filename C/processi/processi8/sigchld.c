#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>

int val=0;
void somma(int sig)
{
	val+=10;
	printf("sono il filgio e stampo =  %d\n",val);
}

int main()
{
int pid,status;
printf("val iniziale = %d\n", val);
pid=fork();
signal(SIGCHLD,somma); //esegue al momento di exit

if(pid==0)
	{
	printf("val prima di exit = %d \n",val);
	exit(0);
	}

wait(&status);
printf(" val finale = %d\n",val);
//exit(0);

}
