/*Desenvolva um programa em C que apresente um menu de opções numa janela “bem” amigável ao 
usuário, onde este deverá escolher qual a região do Brasil que ele gostaria de conhecer. Após o usuário 
informar esta região, limpe toda a janela e escreva no meio dela qual foi a opção do usuário. Lembrando 
que as regiões deverão ser apresentadas conforme o seguinte menu de opções:
Menu de Opções
============
1 – Norte
2 – Nordeste
3 – Centro-Oeste
4 – Sudeste
5 – Sul
0 – Sair do programa*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Qual região do Brasil você gostaria de visitar?\n");
	printf("| Menu de opções      |\n");
	printf("| 1- Norte            |\n");
	printf("| 2- Nordeste         |\n");
	printf("| 3- Centro-Oeste     |\n");
	printf("| 4- Sudeste          |\n");
	printf("| 5- Sul              |\n");
	printf("| 0- Sair do programa |\n");
		scanf("%d", &opcao);
		
	switch(opcao){
		case 1:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Região escolhida: Norte\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 2:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Região escolhida: Nordeste\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 3:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Região escolhida: Centro-Oeste\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 4:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Região escolhida: Sudeste\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 5:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Região escolhida: Sul\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 0:
			system("cls");break;
		default:
			printf("Opção inválida.");
	}
		
	return 0;
}
