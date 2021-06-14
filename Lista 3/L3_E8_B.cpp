//Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes 
//algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada 
//produto e calcule e escreva a identificação e o novo preço após o aumento. 
//Considere as seguintes situações:
//b) o mercador informa produto a produto e você deve perguntar se tem mais algum 
//produto a ser calculado o aumento

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char identificacao[30], opcao;
	float preco;
	int porcentagem, i=0;
	
	do{
		printf("Informe o primeiro nome do produto: ");
			scanf("%s", &identificacao);
		fflush(stdin);
		
		printf("Informe o preço do produto: ");
			scanf("%f", &preco);
		fflush(stdin);
		
		system("cls");
		
		porcentagem = preco / 10;
		preco = preco + porcentagem;
		printf("O produto %s ", identificacao);
		printf(" teve o preço alterado para: %.2f\n", preco);
		
		do{
			printf("Deseja mudar o preço de mais produtos(S ou N)?\n");
				scanf("%c", &opcao);
			fflush(stdin);
			opcao = toupper(opcao);
			system("cls");
			if(opcao != 'S' && opcao != 'N')
				printf("Opção inválida, digite novamente.\n");
		}while(opcao != 'S' && opcao != 'N');		
	}while(opcao == 'S');
	
	return 0;
}
