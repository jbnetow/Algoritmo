/*4. Uma loja de móveis de informática está necessitando de um sistema que identifique quais móveis de 
informática estão sendo solicitados pelos seus clientes. Os móveis disponibilizados por esta empresa são: 
1-cadeira, 2-mesa de computador, 3-estante de livros, 4-mesa de impressora e 5-estante de CD. Quando 
se tratar de um móvel que não exista na empresa informe ao cliente que ainda não está disponível.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int compras;
	

		printf("Lojá de móveis:\n");
		printf("Digite o número que corresponde ao produto que deseja comprar:\n");
		printf("1 => Cadeira\n");
		printf("2 => Mesa de computador\n");
		printf("3 => Estante de livros\n");
		printf("4 => Mesa de impressora\n");
		printf("5 => Estante de CD\n");
			scanf("%d", &compras);
		fflush(stdin);
		
		switch(compras){
			case 1:
				printf("Compra efetuada com sucesso! Sua cadeira será entrega dentro de 5 dias úteis");break;
			case 2:
				printf("Compra efetuada com sucesso! Sua mesa de computador será entrega dentro de 5 dias úteis");break;
			case 3:
				printf("Compra efetuada com sucesso! Sua estante de livro será entrega dentro de 5 dias úteis");break;
			case 4:
				printf("Compra efetuada com sucesso! Sua mesa de impressora será entrega dentro de 5 dias úteis");break;
			case 5:
				printf("Compra efetuada com sucesso! Sua estante de CD será entrega dentro de 5 dias úteis");break;
			default:
				printf("Esse produto ainda não está disponível na nossa loja :(");break;
		}
	return 0;
}
