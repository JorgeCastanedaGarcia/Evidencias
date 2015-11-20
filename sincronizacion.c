#include <stdlib.h>
#include <sys/types.h>
#include <wait.h>
#include <stdio.h>

int procesos(int nProc){
	int i;
	for(i=1; i <= nProc; i++)
		if(fork() == 0)
			return i;
		return 0;
}

int main(){
	int status;
	int pid;
	int pros;
	int i;

	printf("ingresa el numero de procesos\n");
	scanf("%d",&pros);

	pid=procesos(pros);
	status=pros;
			
		if( pid==0){			
		for(i=0; i <= pros; i++){
			wait(&status);
		}
		printf("Soy el padre\n");		
		}else
		printf("Soy el hijo %d - %d \n", pid, getpid());
	

/*	switch(pid){
		case 0: {
			wait(&status);
			printf("Soy el proceso Padre\n");
			exit(0);
			} break;
		case 1: {
			printf("Soy el hijo 1\n");
			exit(0);
			} break;
		case 2: {
			wait(&status);
			printf("Soy el hijo 2\n");
			exit(0);
			} break;
		case 3: {
			wait(&status);
			wait(&status);
			printf("Soy el hijo 3\n");
			exit(0);
			} break;
	}*/
}
