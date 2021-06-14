//Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome 
//e a altura da menor delas.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50], nome2[50], nome3[50];
	float altura, altura2, altura3;
	
	printf("Digite o primeiro nome: ");
		fgets(nome, 50, stdin);
	printf("Digite a primeira altura: ");
		scanf("%f", &altura);
	fflush(stdin);
		
	printf("Digite o segundo nome: ");
		fgets(nome2, 50, stdin);
	printf("Digite a segunda altura: ");
		scanf("%f", &altura2);
	fflush(stdin);
		
	printf("Digite o terceiro nome: ");
		fgets(nome3, 50, stdin);
	printf("Digite a terceira altura: ");
		scanf("%f", &altura3);
		
if(altura < altura2 && altura < altura3){
	printf("\nNome: %s\nAltura: %.2f", nome, altura);
}
else if(altura2 < altura && altura2 < altura3){
	printf("\nNome: %s\nAltura: %.2f", nome2, altura2);
}
else{
	printf("\nNome: %s\nAltura: %.2f", nome3, altura3);
}

	
	
	
		
	
	
	
	
	return 0;
}

