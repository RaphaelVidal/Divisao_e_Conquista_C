#include <stdio.h>
#include <stdlib.h>
#define MAX 5

//void quick_sort(int *a, int left, int right);// Prot�tipo da fun��o de ordena��o

int main(){
 int i, vet[MAX]={5,3,8,1,9};//{3,5,8,1,9,2,4,7,0,6}
 
 quick_sort(vet, 0, MAX - 1); // chama a fun��o de ordena��o 
 printf("Valores ordenados");// Imprime os valores ordenados
 for(i = 0; i < MAX; i++){
  	printf(" %d ", vet[i]);
 }
 return 0;
}
 
void quick_sort(int *a, int left, int right) {// Fun��o de Ordena��o por Sele��o
    int i, contdir, x, y;// y � auxilixar para a ordena��o
     
    i = left; // contador para parte esquerda(inicio at� o pivo "meio")
    contdir = right; //contador para parte direita(fim at� o pivo "meio")
    x = a[(left + right) / 2]; // define o pivo para as compara��es
    printf("\n______________________________________\n");
    printf("\nanalisa de %d a %d\n",i,contdir);
	printf("pivo:%d na posicao %d\n\n",x,((left + right) / 2)); 
    
    while(i <= contdir) { // o vetor deve ser ordenado de forma crescente
        while(a[i] < x && i < right) { // compara parte esquerda do vetor para numeros que n�o ir�o precisar ordenar
            printf("a[%d] - %d < %d e ",i,a[i],x);
            printf("%d<%d\n",i,right);
			i++;
			printf("i vai:%d\n",i);
        }
        while(a[contdir] > x && contdir > left) { // compara parte direita do vetor para numeros que n�o ir�o precisar ordenar
            printf("a[%d]<%d e ",contdir,x);
            printf("%d<%d\n",contdir,left);
		    contdir--;
            printf("j cai para:%d\n",contdir);
        }
        if(i <= contdir) {
			
            y = a[i];
            a[i] = a[contdir];
            a[contdir] = y;
            printf("troca %d por %d\n",a[i],a[contdir]);
            i++;
            contdir--;
        }
    }
     
    if(contdir > left) {
    	printf("\nentrou");
        quick_sort(a, left, contdir);
    }
    if(i < right) {
    	printf("\nentrou22222");
        quick_sort(a, i, right);
    }
}
