//Faça e apresente o chinesinho do seu algoritmo do exercício 12.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ddd;
	
	printf("Informe o ddd desejado: "); // Recebe o número
		scanf("%d", &ddd); // Ler o número
		
		//Usuário digitou 19
	switch(ddd){
		case 61: printf("Brasília"); break;// Não executa
		case 71: printf("Salvador"); break;// Não executa
		case 11: printf("São Paulo"); break;// Não executa
		case 21: printf("Rio de Janeiro"); break;// Não executa
		case 32: printf("Juiz de Fora"); break;// Não executa
		case 19: printf("Campinas"); break; //Resultado
		case 27: printf("Vitória"); break;// Não executa
		case 31: printf("Belo Horizonte"); break;// Não executa
		default: printf("Número inválido");// Não executa
	}
	
	
	return 0;
}
