#include <stdio.h>
#include <stdlib.h>



void eso(int i,int f,int h,int s,int*total){
	for(i=1;i<f;i++){
		h=i;
		total[i]=h+s;
		printf("%d\n",total[i]);	
		
	}
}

int main(int argc, char *argv[]) {
	
int num1,total[100],s,num2,f,h,i;	

printf("escriba un numero\n");
scanf("%d",&num1);	

printf("escriba otro numero\n");
scanf("%d",&num2);	
	

if(num1>num2){
f=num1-num2;
s=num2;
}else{
if(num2>num1){
f=num2-num1;
s=num1;
}else{
printf("los numeros son iguales, por lo cual no tienen numeros intermedios\n");	
}	
}



 eso(i,f,h,s,total);

	return 0;
}

