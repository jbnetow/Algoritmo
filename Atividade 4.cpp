//Construa um algoritmo que a partir da leitura de dois números forneça o resto e o 
//quociente da divisão do primeiro pelo segundo número.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, resto, quociente;
	
	printf("Digite o primeiro valor: ");
		scanf("%d", &num1);
	printf("Digite o segundo valor: ");
		scanf("%d", &num2);
		
	quociente = num1 / num2;
	resto = num1 % num2;
	
	printf("Valor do quociente é: %d\n", quociente);
	printf("Valor do resto é: %d", resto);
	

		
	
	return 0;
}
