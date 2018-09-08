#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

//typedef char[100] comandi;

typedef char stringa[10];
typedef stringa sstr[3];

int main()
{
int i,status,pid,n;
sstr str;
printf("inserisci i tuoi 3 comandi\n");

for(i=0;i<3;i++)
	scanf("%s",str[i]);

//comandi cmd[2] = {"ls", "ls | grep sequenza"};
for(i=0;i<3;i++)
	{
	pid=fork();
	switch(pid)
	{
	case 0:
		printf("--------\n");
		system(str[i]);
		printf("--------\n");
		exit(i);
		break;
		}
	wait(&status);
	}
	
	printf("sto chiudendo tutto\n");
	wait(&status);
}
