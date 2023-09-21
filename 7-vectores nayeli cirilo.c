#include <stdio.h>
#include <stdlib.h>



int y(int*nota, int cont){
	
int i;
	
for(i=0;i<=15;i++){
	cont=cont+1;
		if(nota[i]>8){		
			
		printf("la nota del alumno %d es mayor a 8\n",cont);
		}
}
}

	
	int main() {
		
		int i,nota[15],cont=0,posi=0;
		
		for(i=0;i<15;i++){
			
		nota[i]=0;
		printf("escriba la nota\n");
		scanf("%d",&nota[i]);
		
	
		
	
	
		}
			y(nota,cont);
	
	
		
		return 0;
	}
	
	
