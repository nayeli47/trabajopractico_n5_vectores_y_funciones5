#include <stdio.h>
#include <stdlib.h>

int y(int num, int *fibo){
	int i;
	for(i=0;i<num;i++){
		
		printf("%d\n",fibo[i]);
		
	}	
	
}

	int main() {
		
		int i,num,cont=0,posi=0,result;
		
		
		
		printf("ingrese un numero\n");
		scanf("%d",&num);
		
		int fibo[num];
			fibo[0]=0;
			fibo[1]=1;
			
		for(i=02;i<num;i++){
			fibo[i]=fibo[i-1]+fibo[i-2];
			
		}
		
		y(num,fibo);
		
			
			
			
		
		
		
		
		return 0;
	}
	
	
	
