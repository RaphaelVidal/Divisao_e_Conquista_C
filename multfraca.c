 #include<stdio.h>
 #include<stdlib.h>
 int exp(int x,int y){
 	 printf("expoente he: %d\n",y);
	 if(y==0){
	 	return 0;
	 }else{
	 	return(x+exp(x,y-1));
	 }
 }
 int main(){
 	int num1,num2;
 	printf("digite num1:");
 	scanf("%d",&num1);
 	printf("digite num2:");
 	scanf("%d",&num2);
 	printf("o resultado he:%d\n",exp(num1,num2));
 	system("pause");
 }
