#include<stdio.h>
int  main(){
 int a[5]={2,4,6,8,10},n=5,i,inicio=0,fim=n-1,meio,resultado=0,s;

 printf("Digite valor a ser buscado:");
 scanf("%d",&s);
 while(inicio<=fim && resultado==0)
 {
	meio=(inicio+fim)/2;// para cada vetor que foi dividido pegar endereco do meio do vetor
	  if(s>a[meio])// verifica se o numero digitado poderá estar do meio pra o fim, pois o vetor é sempre crescente
	  {
	   inicio=meio+1;
	   //printf("inicio= %d meio= %d fim= %d \n",inicio,meio,fim);
	  }
	  else if(s<a[meio])// verifica se o numero digitado poderá estar do meio pra o inicio, pois o vetor é sempre crescente
	  {
	   fim=meio-1;
	  // printf("inicio= %d meio= %d fim= %d \n",inicio,meio,fim);
	  }
	  else
	   resultado=1;
	   printf("inicio= %d meio= %d fim= %d\n",inicio,meio,fim);
 }
 if(resultado==1)
 	printf("valor encontrado, posicao no vetor: %d ",meio );
 else
 	printf("valor nao encontrado ");
}
