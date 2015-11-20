#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<wait.h>

int procesos(int nProc){
        int i;
        for(i=1;i<=nProc;i++)
                if(fork()==0)
                        return i;
        return 0;
}

int main(){
	char caracter;
	char cadena[3];
        int status;
        int i;
        int num;
	int numero;
        FILE *archivo;
        printf("Ingresa numero de procesos\n");
        scanf("%d",&num);
        int pid;
        pid=procesos(num);
		
		if(pid==0){
			for(i=0;i<num;i++){
				wait(&status);
			}
		printf("Soy el padre y terminamos esto\n");
		exit(0);
               	}else{		
			archivo=fopen("Numeros.txt","r");
			int j;
        	        do{			
				j=0;
				do{
                       			caracter = fgetc(archivo);
					if(caracter==EOF)
					break;
                     			cadena[j]=caracter;
                       			j++;
				}while(caracter != '\n');
                       	cadena[j]='\0';
			numero=atoi(cadena);
			if(pid==numero){
				printf("Me encontre: Hola mundo y soy pid %d\n",pid);
                	}        				
			}while(caracter != EOF);	
		exit(0)	;
		fclose(archivo);         
	}
}
