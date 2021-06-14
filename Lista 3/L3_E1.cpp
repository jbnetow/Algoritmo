/*Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA, 
baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)
*/
#include <stdio.h>
int main()
{
int fatorial, numero;
printf("Insira um valor para o qual deseja calcular seu fatorial: ");
scanf("%d", &numero);
 
for(fatorial = 1; numero > 1; numero = numero - 1){
fatorial = fatorial * numero;
}
 
printf("\nFatorial calculado: %d", fatorial);
return 0;
}
