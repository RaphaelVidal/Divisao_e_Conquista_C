#include<stdio.h>
void Quick(int vetor[10], int inicio, int fim);
int main(){
   
   int vetor[10] = {7, 9, 4, 3, 6, 1, 18, 2, 10, 5};
   
   int i;   
   printf("Vetor desordenado:");
   for(i = 0; i < 10; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
   
   Quick(vetor, 0, 9);
   
   printf("Vetor ordenado:\n");
   for(i = 0; i < 10; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
}

void Quick(int vetor[10], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2); // define o meio de cada chamada
   pivo = vetor[meio];
   do{
      while (vetor[i] < pivo)  i = i + 1;// vai analisar apenas valores maiores que o pivo ent�o icrementa
      while (vetor[j] > pivo) j = j - 1;// vai analisar apenas valores menores que o pivo ent�o icrementa
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
        
   }      
   }while(j > i);
   if(inicio < j) Quick(vetor, inicio, j);//pega valores a esquerda de cada pivo
   if(i < fim) Quick(vetor, i, fim); //pega valores a direita de cada pivo  
}
