//Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o 
//quociente da divis�o do primeiro pelo segundo n�mero.

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
	
	printf("Valor do quociente �: %d\n", quociente);
	printf("Valor do resto �: %d", resto);
	

		
	
	return 0;
}
