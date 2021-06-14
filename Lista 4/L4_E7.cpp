/*Construa um algoritmo que leia um conjunto de dados contendo altura e sexo (‘M’ para 
masculino e ‘F’ para feminino) de 50 pessoas e, depois, calcule e escreva:
? A maior e a menor altura do grupo;
? A média de altura das mulheres;
*/
#include<stdio.h>
#include<locale.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int altura, maiorAltura=0, menorAltura=500, mulheres=0, somaMulheres=0, mediaMulheres;
	char sexo;
	
	for(int i=0; i < 5; i++){
		printf("Informe a altura em centimetros: ");
			scanf("%d", &altura);
		fflush(stdin);
		
		do{
			printf("Informe o sexo(F ou M): ");
				scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper(sexo);
			if(sexo != 'M' && sexo != 'F')
				printf("Sexo inválido, digite novamente.\n");
		}while(sexo != 'M' && sexo != 'F');
		
		if(sexo == 'F'){
			mulheres++;
			somaMulheres = somaMulheres + altura;
		}
		
		if(altura > maiorAltura)
			maiorAltura = altura;
		if(altura < menorAltura)
			menorAltura = altura;
	}
	
	printf("Maior altura: %d\n", maiorAltura);
	printf("Menor altura: %d\n", menorAltura);
	
	mediaMulheres = somaMulheres / mulheres;
	printf("Média de altura das mulheres: %d\n", mediaMulheres);
	
	
	
	return 0;
}
