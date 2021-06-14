/*Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de 
tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um 
outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
(chinesinho) ao lado.
*/

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Informe o primeiro valor: \n");//mostrar mensagem na tela
		scanf("%f", &a);//receber valor em a
	fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
	printf("Informe o segundo valor: \n");//mostrar mensagem na tela
		scanf("%f", &b);//receber valor em b
	fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
	printf("Informe o terceiro valor:\n");//mostrar mensagem na tela
		scanf("%f", &c);//receber valor em c
	fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados


	//usu�rio digitou 11, 10, 11
	if(a == b && b == c){// N�o executa
		printf("Tri�ngulo equil�tero");// N�o executa
	}
	else if(a == b && b != c || c == a && a != b || b == c && c != a){//Executa
		printf("Tri�ngulo is�sceles");//Resultado
	}
	else if(a != b && b != c){// N�o executa
		printf("Tri�ngulo escaleno");// N�o executa
	}
	else{// N�o executa
		printf("Valor inv�lido");// N�o executa
	}

	
	

return 0;
}
