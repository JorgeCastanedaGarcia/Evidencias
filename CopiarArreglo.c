#include<stdio.h>
int Arreglo1[5];
int Arreglo2[5];
int i;
//int *ar2[3];

void copiarArreglo(int *ar2){
	int i;
	
	for(i=0;i<=4;i++){
		Arreglo2[i]=*(ar2+i);
	}-
	
}

int main(){

	Arreglo1[0]=2;
	Arreglo1[1]=20;
	Arreglo1[2]=200;
	Arreglo1[3]=2000;
	Arreglo1[4]=20000;
		
		
		
	copiarArreglo(Arreglo1);
	for(i=0;i<=4;i++){
		printf("%d\n",Arreglo2[i]);
	}
	
}

