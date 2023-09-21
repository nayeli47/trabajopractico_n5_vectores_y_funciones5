#include <stdio.h>


int y(){
	
	int i,cont=0,cont2=0,sueldo[3];
	for(i=0;i<3;i++){
		
		printf("escriba su sueldo\n");
		scanf("%d",&sueldo[i]);
		
		
		if(sueldo[i]<2000){
			
			cont=cont+1	;
			
			
		}else{
			
			if(sueldo[i]>2000){
				cont2=cont2+1;			
				
			}	
		}
		
	}	
	printf("los sueldos menores a 2000 son:%d\n",cont);
	
	return cont2;
}

int main(int argc, char *argv[]) {
	

	
	
	
	
	printf("los sueldos mayores a 2000 son:%d\n",y());


return 0;
}

