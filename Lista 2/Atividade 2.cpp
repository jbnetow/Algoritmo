//Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor 
//absoluto) elaborando os c�lculos matem�ticos para isso.


#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um numero: ");
		scanf("%f", &num);
	fflush(stdin);
	
	if(num < 0){
		num = -(num);
		printf("O m�dulo do n�mero digitado � igual a %.0f", num);
	}
	else{
		printf("O m�dulo do n�mero digitado � igual a %.0f", num);
	}
	
	return 0;
}
