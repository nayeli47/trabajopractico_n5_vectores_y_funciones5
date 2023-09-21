#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int r[5],aux,i,total;



for(i=1;i<=5;i++){
printf("escriba la resistencia numero %d\n",i);
scanf("%d",&r[i]);
}	

total=r[1]+r[2]+r[3]+r[4]+r[5];
aux=r[5];

printf("la suma de las resistencias es:%d\n",total);
printf("%d,%d,%d,%d,%d",r[1],r[2],r[3],r[4],aux);
	return 0;
}

