//Complete os exerc�cios 1 (multa no eix�o) e 3 (tri�ngulo) com uma mensagem para quando a 
//condi��o n�o for satisfeita (falsa).
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Informe o primeiro valor: \n");
		scanf("%f", &a);
	printf("Informe o segundo valor: \n");
		scanf("%f", &b);
	printf("Informe o terceiro valor:\n");
		scanf("%f", &c);
		
	if(a < b + c && c < b + a){
		printf("Valor valido");
	}
	else{
		printf("Valor inv�lido");
	}
		
	
	return 0;
}
