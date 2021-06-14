/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados por código. 
Os dados utilizados para a ação obedecem à seguinte codificação:
• 1, 2, 3, 4 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 6 = voto em branco.
Elabore um algoritmo que calcule e escreva:
• O total de votos para cada candidato e seu percentual sobre o total;
• O total de votos nulos e seu percentual sobre o total;
• O total de votos em branco e seu percentual sobre o total.
Como finalizador do conjunto de votos, tem-se o valor 0*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int candidato, totalVotos=0;
	int candidato1=0, candidato2=0, candidato3=0, candidato4=0, nulo=0, branco=0;
	int porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5, porcentagem6;
	
	do{
		printf("Digite o número correspondete ao cadidato que deseja votar: \n");
		printf("1 => Marcos\n");
		printf("2 => José\n");
		printf("3 => Nathalia\n");
		printf("4 => Elielba\n");
		printf("5 => Nulo\n");
		printf("6 => Voto em branco\n");
		printf("0 => Para finalizar a votação\n");
			scanf("%d", &candidato);
		fflush(stdin);
		system("cls");
		
		if(candidato != 1 && candidato != 2 && candidato != 3 && candidato != 4 && candidato != 5 && candidato != 6 && candidato != 0)
			printf("Voto inválido, digite novamente.\n");
		
		if(candidato == 1 || candidato == 2 || candidato == 3 || candidato == 4 || candidato == 5 || candidato == 6)
			totalVotos++;
			
		if(candidato == 1)
			candidato1++;
		else if(candidato == 2)
			candidato2++;
		else if(candidato == 3)
			candidato3++;
		else if(candidato == 4)
			candidato4++;
		else if(candidato == 5)
			nulo++;
		else if(candidato == 6)
			branco++;
	}while(candidato != 0);
	
		porcentagem1 = (candidato1 * 100) / totalVotos;
		porcentagem2 = (candidato2 * 100) / totalVotos;
		porcentagem3 = (candidato3 * 100) / totalVotos;
		porcentagem4 = (candidato4 * 100) / totalVotos;
		porcentagem5 = (nulo * 100) / totalVotos;
		porcentagem6 = (branco * 100) / totalVotos;
		
		printf("Candidato Marcos:\n");
		printf("Total de votos: %d -- Porcentual sobre o total de votos: %d\n", candidato1, porcentagem1);
		printf("-----------------------------------------------------------\n");
		
		printf("Candidato José:\n");
		printf("Total de votos: %d -- Porcentual sobre o total de votos: %d\n", candidato2, porcentagem2);
		printf("-----------------------------------------------------------\n");
		
		printf("Candidato Nathalia:\n");
		printf("Total de votos: %d -- Porcentual sobre o total de votos: %d\n", candidato3, porcentagem3);
		printf("-----------------------------------------------------------\n");
		
		printf("Candidato Elielba:\n");
		printf("Total de votos: %d -- Porcentual sobre o total de votos: %d\n", candidato4, porcentagem4);
		printf("-----------------------------------------------------------\n");
		
		printf("Voto nulo :\n");
		printf("Total de votos: %d -- Porcentual sobre o total de votos: %d\n", nulo, porcentagem5);
		printf("-----------------------------------------------------------\n");
		
		printf("Voto em branco:\n");
		printf("Total de votos: %d -- Porcentual sobre o total de votos: %d\n", branco, porcentagem6);
		printf("-----------------------------------------------------------");
		
	return 0;
}
