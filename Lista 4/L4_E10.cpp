/*Construa um algoritmo que permita fazer um levantamento do estoque de vinhos de uma adega, tendo como dados de entrada tipos de vinho, sendo: ‘T’ para tinto,
‘B’ para branco e ‘R’ para rosê. Especifique a porcentagem de cada tipo sobre o total geral de vinhos;
a quantidade de vinhos é desconhecida, utilize como finalizador ‘F’ de fim.*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char adicionarVinho;
	int vinhoTinto=0, vinhoBranco=0, vinhoRose=0, totalVinhos=0;
	int porcentagemTinto, porcentagemBranco, porcentagemRose;
	
	do{
		printf("Levantamento de estoque:\n");
		printf("Para adicionar vinhos, digite a letra correspondente ao vinho que deseja adicionar\n");
		printf("T => Vinho tinto\n");
		printf("B => Vinho branco\n");
		printf("R => Vinho rosê\n");
		printf("F => Para finalizar\n");
			scanf("%c", &adicionarVinho);
		fflush(stdin);
		adicionarVinho = toupper(adicionarVinho);
		system("cls");
		
		if(adicionarVinho == 'T' || adicionarVinho == 'B' || adicionarVinho == 'R')
			totalVinhos++;
			
		if(adicionarVinho == 'T')
			vinhoTinto++;
		else if(adicionarVinho == 'B')
			vinhoBranco++;
		else if(adicionarVinho == 'R')
			vinhoRose++;	
	}while(adicionarVinho != 'F');
	
			porcentagemTinto = (vinhoTinto * 100) / totalVinhos;
			porcentagemBranco = (vinhoBranco * 100) / totalVinhos;
			porcentagemRose = (vinhoRose * 100) / totalVinhos;
		
			printf("Estoque: \n");
			printf("Total de vinhos: %d\n", totalVinhos);
			printf("Vinho tinto: %d -- %d por cento do estoque\n", vinhoTinto, porcentagemTinto);
			printf("Vinho branco: %d -- %d por cento do estoque\n", vinhoBranco, porcentagemBranco);
			printf("Vinho rosê: %d -- %d por cento do estoque\n", vinhoRose, porcentagemRose);
	
	
	return 0;
}
