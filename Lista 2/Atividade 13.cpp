//Fa�a e apresente o chinesinho do seu algoritmo do exerc�cio 12.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ddd;
	
	printf("Informe o ddd desejado: "); // Recebe o n�mero
		scanf("%d", &ddd); // Ler o n�mero
		
		//Usu�rio digitou 19
	switch(ddd){
		case 61: printf("Bras�lia"); break;// N�o executa
		case 71: printf("Salvador"); break;// N�o executa
		case 11: printf("S�o Paulo"); break;// N�o executa
		case 21: printf("Rio de Janeiro"); break;// N�o executa
		case 32: printf("Juiz de Fora"); break;// N�o executa
		case 19: printf("Campinas"); break; //Resultado
		case 27: printf("Vit�ria"); break;// N�o executa
		case 31: printf("Belo Horizonte"); break;// N�o executa
		default: printf("N�mero inv�lido");// N�o executa
	}
	
	
	return 0;
}
