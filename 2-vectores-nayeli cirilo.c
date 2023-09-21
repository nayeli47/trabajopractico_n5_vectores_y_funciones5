#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int f=1,i;
	float n[5],total;
	
	
	
	for(i=1;i<=5;i++){
		printf("escriba el %d° numero\n",i);
		scanf("%f",&n[i]);
		if(n[i]>=f){
		f=n[i];
		}
	}	
	
	total=(n[1]+n[2]+n[3]+n[4]+n[5])/5;

	
	printf("el promedio de los numeros es:%.2f\n",total);
	printf("el numero mas grande ingresado es:%d",f);
	return 0;
}

