//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes 
//algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada 
//produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento. 
//Considere as seguintes situa��es:
//a) o mercador informa o n�mero de produtos que possui antes de entrar com o pre�o 
//dos produtos
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qntProdutos;
	
	printf("Quantos produtos voc� deseja alterar o pre�o?");
		scanf("%d", &qntProdutos);
		
	char identificacao[qntProdutos][30];
	float preco[qntProdutos];
	int porcentagem[qntProdutos];
	
	for(int i=0; i < qntProdutos; i++){
		printf("Informe o primeiro nome do produto: ");
			scanf("%s", &identificacao[i]);
		fflush(stdin);
		
		printf("Informe o pre�o do produto: ");
			scanf("%f", &preco[i]);
		fflush(stdin);
		
		system("cls");
	}
	
	for(int j=0; j < qntProdutos; j++){
		printf("Produto %s", identificacao[j]);
		porcentagem[j] = preco[j] / 10;
		preco[j] = preco[j] + porcentagem[j];
		printf(" teve o pre�o alterado para: %.2f\n", preco[j]);
	}
	
	
	return 0;
}
