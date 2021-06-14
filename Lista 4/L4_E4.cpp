// Construa um algoritmo que apresente os 20 primeiros termos da série de Fibonacci.
#include<stdio.h> 
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 

   	int i, numero[20];
   	
   	printf("Sequência Fibonacci:\n");
   	
   	for(i=1;i<=20;i++){
	   	
   		if(i==1)
   			numero[i] = 0;
   			else if(i==2)
   				numero[i] = 1;
   				else
   					numero[i] = numero[i-1] + numero[i-2];
   		
   		printf("%d - %d\n", i, numero[i]);
   	}
   		
   		
	return 0;
	
}
