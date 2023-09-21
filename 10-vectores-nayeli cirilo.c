#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
int i,j,f,pro=1,cont=0,cont2=0;
float  suma=0,num [10],prom=0;

	for(i=1; i<=10; i++){
		
	printf("el numero %d\n",i);	
	scanf("%f",&num[i]);
	
	suma=num[i]+suma;
	pro=pro*num[i];	
	prom=suma/10;
	
	
	}
	
	for(i=1;i<=10;i++){
	if(num[i]<prom){
		cont=cont+1;	
	}	
	}
	
	printf("la suma de los numeros es:%.1f\n",suma);	
	printf("la multiplicacion de los numeros es:%d\n",pro);	
	printf("el promedio de los numeros es:%.2f\n",prom);
	printf("la cantidad de numeros menores al promedio es:%d\n",cont);	
	
	
	return 0;
}

