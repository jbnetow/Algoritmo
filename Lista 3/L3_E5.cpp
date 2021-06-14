/*Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é 
fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça.
*/
#include <stdio.h>
int main(){
	
int fatorial, numero;

printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &numero);
 
for(fatorial = 1; numero > 1; numero = numero - 1){
fatorial = fatorial * numero;
}
 
printf("\nFatorial calculado: %d", fatorial);
return 0;
}
