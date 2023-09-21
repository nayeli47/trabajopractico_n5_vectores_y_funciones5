#include <stdio.h>
#include <stdlib.h>


void imprimir(int cont2, int cont3, int cont4){
	if(cont2>cont3 && cont2>cont4){
		
		printf("es ascendente\n");	
	}else{
		if(cont3>cont4 && cont3>cont2){
			printf("es descendente\n");	
		}else{
			printf("los numeros fueron ingresados de manera desordenada\n");	
		}}
	
}
	
int main(){
	
	int i,f=0,acu=0,j=0,num2,suma=0,cont2=0,cont3=0,num[100],cont4=0;

	printf("ingrese un numero\n");
	scanf("%d",&num2);
	num[0]=num2;
	f=num[0];
	
	for(i=1;i<=100;i++){
		
		while(num2!=0){	
		
		i++;
		printf("ingrese un numero\n");
		scanf("%d",&num2);
		
		num[i]=num2;
		if(num[i]>0){
		j=num[i];	
	
		}
		if(f>num[i]){
			
			
			cont3=cont3+1;	
			
		}else{	
			if(f<num[i]){
				
				
				
				cont2=cont2+1;	
				
				
			}else{
				cont4=cont4+1;
			}
		}	
	}
	}
	
	cont2=cont2+1;
	cont3=cont3+1;
	
	imprimir(cont2,cont3,cont4);
	
	

	suma=j+f;
	printf("la suma del primer numero y el ultimo es:%d",suma);	
		
		
	
	
	
	
	
	
	return 0;
	
	
	
}
	
