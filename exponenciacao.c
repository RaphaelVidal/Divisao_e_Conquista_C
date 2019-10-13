#include<stdio.h>
#include<stdlib.h>

int exponenciacao(float a,int n){
	float an;
	int i=0;
	printf("expoente he: %d\n",n);
	if(n==0){
		printf("\ncaso base retorna 1 - %.0f elevado a %d\n\n",a,n);
		return 1;/*caso base de parada*/	
	}
	else{
		printf("divisao\n");
		float aux=exponenciacao(a,n/2);
			printf("retorno:%.0f\n",aux);
			an=aux*aux;
			printf("%.0f * %.0f = %.0f\n",aux,aux,an);
		if(n%2==1){
			an=an*a;
			printf("expoente= %d mod 2 he:%d\n",n,n%2);
			printf(" resultado alterado para: %.0f\n",an);
		}
		printf(" %.0f elevado a %d resultado: %.0f\n\n",a,n,an);
		return an;
	}	
}
int main(void){
	int exp=12;
	float num=2,result;
	result=exponenciacao(num,exp);
	printf("resultado final: %.0f",result);
	return 0;
}
