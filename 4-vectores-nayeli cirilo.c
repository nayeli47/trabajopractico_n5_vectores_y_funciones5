#include <stdio.h>
#include <stdlib.h>



void eso(int i,float*total,float f){
	float prom;
	for(i=1;i<=30;i++){
		printf("escriba el la nota del alumno %d\n",i);	
		scanf("%f",&total[i]);
		f=total[i]+f;
	}
	prom=f/30;
	printf("el promedio es:%.2f",prom);
}

int main(int argc, char *argv[]) {
	
	int num1,num2,i;	
	float total[30],f=0;
	
	
	
	eso(i,total,f);
	
	

	
	return 0;
}

