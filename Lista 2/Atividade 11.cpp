/*Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de 
triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um 
outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
(chinesinho) ao lado.
*/

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Informe o primeiro valor: \n");//mostrar mensagem na tela
		scanf("%f", &a);//receber valor em a
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
	printf("Informe o segundo valor: \n");//mostrar mensagem na tela
		scanf("%f", &b);//receber valor em b
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
	printf("Informe o terceiro valor:\n");//mostrar mensagem na tela
		scanf("%f", &c);//receber valor em c
	fflush(stdin);//descarrega os buffers de saída de um fluxo de dados


	//usuário digitou 11, 10, 11
	if(a == b && b == c){// Não executa
		printf("Triângulo equilátero");// Não executa
	}
	else if(a == b && b != c || c == a && a != b || b == c && c != a){//Executa
		printf("Triângulo isósceles");//Resultado
	}
	else if(a != b && b != c){// Não executa
		printf("Triângulo escaleno");// Não executa
	}
	else{// Não executa
		printf("Valor inválido");// Não executa
	}

	
	

return 0;
}
