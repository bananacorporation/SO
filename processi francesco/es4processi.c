#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void gestione (int sig) {
	if (sig == SIGUSR1) {
		printf("Processo con pid %d in esecuzione \n",getpid());
		return ;
	}
	else { 
	       	printf("Processo bloccato \n");
		exit(2);
	}	
}

int main(int args, char *comandi[]) {
	int pid,i,pf;
	for (i=1;i<=args; i++){
		pid = fork();
		if (pid<0) printf("Errore \n");
		if (pid == 0) {
			signal(SIGUSR1,gestione);
			signal(SIGUSR2,gestione);
			pause();
			system(comandi[i]);
			exit(0);
			
		}
		else {
			sleep(1);
			printf("%d : ho creato il figlio %d \n",getpid(),pid);
			if (getppid() %2 ==0) {
				if (pid%2 ==0) kill(pid,SIGUSR1);
				else kill(pid,SIGUSR2);
			}
			else {
				if(pid %2 ==0) kill(pid,SIGUSR2);
				else kill(pid,SIGUSR1);
			}
			wait(&status);
			status= WEXITSTATUS(status);
			if (status == 2) printf("Processo bloccato con stato %d \n",status);
			else printf("Processo terminato con stato %d \n",status);


		}
	}
		return 0;
}
