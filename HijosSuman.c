#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
	int status;
	int pid;
	int pros;
	FILE *archivo;
	char caracter;
	int num;
	int i;
	char cadena[10];


	printf("ingresa el numero de procesos\n");
	scanf("%d",&pros);
	pid=procesos(pros);
	status=pros;


	archivo = fopen("holis.txt","w");

	fprintf(archivo,"%d\n",100);
	fprintf(archivo,"%d\n",200);

	fclose(archivo);

	archivo = fopen("holis.txt","r");

	do{
		caracter=fgetc(archivo);
		printf("%c",caracter);
		cadena[i]=caracter;
		i++;
	}while(caracter!='\n');

	cadena[i+1] = '\0';

	num=atoi(cadena);
	num+=5;
	printf("%d\n",num);
	fclose(archivo);
}

