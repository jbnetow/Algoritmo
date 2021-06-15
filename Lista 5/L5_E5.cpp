/*Faça um programa que pergunte ao usuário qual a letra inicial do seu sexo (masculino/feminino) e 
escreva por extenso o sexo informado, usando o operador condicional ternário.*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	do{
		printf("Informe o seu sexo: ");
			scanf("%c", &sexo);
		sexo = toupper(sexo);
		if(sexo != 'F' && sexo != 'M')
			printf("Sexo inválido, digite novamente\n");
	}while(sexo != 'F' && sexo != 'M');
	
	sexo == 'F' ? printf("Feminino") : printf("Masculino"); 
	 
	return 0;
}
