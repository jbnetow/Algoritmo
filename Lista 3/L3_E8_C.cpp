//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes 
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada 
//produto e calcule e escreva a identificação e o novo preço após o aumento. 
//Considere as seguintes situações:
//c) o preço do último produto fornecido pelo mercador é -1

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char identificacao[30];
	float preco;
	int porcentagem, i=0;
	
	printf("Para finalizar o programa digite -1\n");
	
	while(preco != -1){
		printf("Informe o primeiro nome do produto: ");
			scanf("%s", &identificacao);
		fflush(stdin);
		
		printf("Informe o preço do produto: ");
			scanf("%f", &preco);
		fflush(stdin);
		
		if(preco < 1)
			printf("Programa finalizado!");
		else if(preco > 1){
			porcentagem = preco / 10;
			preco = preco + porcentagem;
			printf("O produto %s ", identificacao);
			printf(" teve o preço alterado para: %.2f\n", preco);
		}
	}
	
	return 0;
}
