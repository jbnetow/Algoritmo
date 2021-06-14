//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes 
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada 
//produto e calcule e escreva a identificação e o novo preço após o aumento. 
//Considere as seguintes situações:
//a) o mercador informa o número de produtos que possui antes de entrar com o preço 
//dos produtos
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qntProdutos;
	
	printf("Quantos produtos você deseja alterar o preço?");
		scanf("%d", &qntProdutos);
		
	char identificacao[qntProdutos][30];
	float preco[qntProdutos];
	int porcentagem[qntProdutos];
	
	for(int i=0; i < qntProdutos; i++){
		printf("Informe o primeiro nome do produto: ");
			scanf("%s", &identificacao[i]);
		fflush(stdin);
		
		printf("Informe o preço do produto: ");
			scanf("%f", &preco[i]);
		fflush(stdin);
		
		system("cls");
	}
	
	for(int j=0; j < qntProdutos; j++){
		printf("Produto %s", identificacao[j]);
		porcentagem[j] = preco[j] / 10;
		preco[j] = preco[j] + porcentagem[j];
		printf(" teve o preço alterado para: %.2f\n", preco[j]);
	}
	
	
	return 0;
}
