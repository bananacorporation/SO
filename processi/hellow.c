#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void gestore (int sig) {
	printf("PROCESSO TERMINATO\n");
	exit(2);
}

int main(){
	signal(SIGINT,gestore);
	while(1){
		printf("Hello world \n");
		sleep(1);
	}
}


