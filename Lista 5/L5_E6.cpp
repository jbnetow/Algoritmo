/*Desenvolva um programa em C que apresente um menu de op??es numa janela ?bem? amig?vel ao 
usu?rio, onde este dever? escolher qual a regi?o do Brasil que ele gostaria de conhecer. Ap?s o usu?rio 
informar esta regi?o, limpe toda a janela e escreva no meio dela qual foi a op??o do usu?rio. Lembrando 
que as regi?es dever?o ser apresentadas conforme o seguinte menu de op??es:
Menu de Op??es
============
1 ? Norte
2 ? Nordeste
3 ? Centro-Oeste
4 ? Sudeste
5 ? Sul
0 ? Sair do programa*/
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	
	printf("Qual regi?o do Brasil voc? gostaria de visitar?\n");
	printf("| Menu de op??es      |\n");
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
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Regi?o escolhida: Norte\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 2:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Regi?o escolhida: Nordeste\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 3:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Regi?o escolhida: Centro-Oeste\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 4:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Regi?o escolhida: Sudeste\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 5:
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n                                               Regi?o escolhida: Sul\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");break;
		case 0:
			system("cls");break;
		default:
			printf("Op??o inv?lida.");
	}
		
	return 0;
}
