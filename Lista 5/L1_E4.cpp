/*4. Uma loja de m�veis de inform�tica est� necessitando de um sistema que identifique quais m�veis de 
inform�tica est�o sendo solicitados pelos seus clientes. Os m�veis disponibilizados por esta empresa s�o: 
1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando 
se tratar de um m�vel que n�o exista na empresa informe ao cliente que ainda n�o est� dispon�vel.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int compras;
	

		printf("Loj� de m�veis:\n");
		printf("Digite o n�mero que corresponde ao produto que deseja comprar:\n");
		printf("1 => Cadeira\n");
		printf("2 => Mesa de computador\n");
		printf("3 => Estante de livros\n");
		printf("4 => Mesa de impressora\n");
		printf("5 => Estante de CD\n");
			scanf("%d", &compras);
		fflush(stdin);
		
		switch(compras){
			case 1:
				printf("Compra efetuada com sucesso! Sua cadeira ser� entrega dentro de 5 dias �teis");break;
			case 2:
				printf("Compra efetuada com sucesso! Sua mesa de computador ser� entrega dentro de 5 dias �teis");break;
			case 3:
				printf("Compra efetuada com sucesso! Sua estante de livro ser� entrega dentro de 5 dias �teis");break;
			case 4:
				printf("Compra efetuada com sucesso! Sua mesa de impressora ser� entrega dentro de 5 dias �teis");break;
			case 5:
				printf("Compra efetuada com sucesso! Sua estante de CD ser� entrega dentro de 5 dias �teis");break;
			default:
				printf("Esse produto ainda n�o est� dispon�vel na nossa loja :(");break;
		}
	return 0;
}
