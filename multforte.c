#include<stdio.h> 
#include<stdlib.h>


/* formula:

 
		se resto 0: num2+num2
		se resto 0: (num2+num2)+num1
*/

int mult(float n,int e){ //prim:2 e 5   segunda: 2 e 2 ter:2 1 quart: 2 e 0
	float ae;
	int i=0;
	printf("he: %d\n",e);
	if(e==0){
		printf("\ncaso base retorna 0\n\n");
		return 0;/*caso base de parada*/	
	}
	else{
		float aux=mult(n,e/2);  // 0
			printf("conquista tipo1 aux:%.0f\n",aux);
			ae=aux+aux;
			printf(" resultado: %.0f\n",ae);
		if(e%2==1){
			ae=ae+n;
			printf("complemento: conquista tipo2 pois %d mod 2 he:%d\n",e,e%2);
			printf(" resultado alterado para: %.0f\n",ae);
		}
		printf(" %.0f vezes a %d resultado: %.0f\n\n",n,e,ae);
		return ae;
	}	
}
int main(void){
	int num1=5;
	float num2=2,result;
	result=mult(num2,num1);
	printf("resultado final: %.0f",result);
	return 0;
}
