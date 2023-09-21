#include <stdio.h>
#include <stdlib.h>

int hj(int*uni,int j, int i){
	int total=0, nombre=0,h;
	for(i=1;i<=2;i++){
		printf("empleado %d\n",i);	
		
	for(j=1;j<=3;j++)
	{
		printf("escriba las unidades vendidas del dia %d\n",j);		
		scanf("%d",&uni[j]);
		total=uni[j]+total;
		
		if(uni[j]>h){
			h=uni[j];
			nombre=i;
			
		}
	}
	}
	printf("el vendedor con mayor ventas diarias es:%d\n",nombre);
return total;
}

	
	
int main() {
	int i=0,j,uni[15],nombre,total=0;
	

	
	printf(" el total es : %d",hj(uni,j,i));

	
	
	return 0;
}

