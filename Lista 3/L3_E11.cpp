#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char finalista1[20], finalista2[20], finalista3[20];
	int qntJuizes;
	int nota1, nota2, nota3;
	int somaNota1, somaNota2, somaNota3;
	
	printf("Informe quantos juízes irão votar:");
		scanf("%d", &qntJuizes);
	fflush(stdin);	
	
	printf("Informe o primeiro nome do 1° finalista: \n");
		scanf("%s", &finalista1);
	fflush(stdin);
		
	printf("Informe o primeiro nome do 2° finalista: \n");
		scanf("%s", &finalista2);
	fflush(stdin);
	
	printf("Informe o primeiro nome do 3° finalista: \n");
		scanf("%s", &finalista3);
	fflush(stdin);
	system("cls");
	
	for(int j=0; j < qntJuizes; j++){
		do{
			printf("%d° Juíz -\nInforme a nota do 1° finalista: \n", j + 1);
				scanf("%d", &nota1);
			fflush(stdin);
			if(nota1 < 0 || nota1 > 100)
				printf("Nova inválida, digite novamente.\n");
		}while(nota1 < 0 || nota1 > 100);
		
		do{
			printf("%d° Juíz -\nInforme a nota do 2° finalista: \n", j + 1);
				scanf("%d", &nota2);
			fflush(stdin);
			if(nota2 < 0 || nota2 > 100)
				printf("Nova inválida, digite novamente.\n");
		}while(nota2 < 0 || nota2 > 100);
		
		do{
			printf("%d° Juíz -\nInforme a nota do 3° finalistao: \n", j + 1);
				scanf("%d", &nota3);
			fflush(stdin);
			if(nota3 < 0 || nota3 > 100)
				printf("Nova inválida, digite novamente.\n");
		}while(nota3 < 0 || nota3 > 100);
		
		system("cls");
		
		somaNota1 = somaNota1 + nota1;
		somaNota2 = somaNota2 + nota2;
		somaNota3 = somaNota3 + nota3;
		
	}
	
	printf("Nome : %s\n", finalista1);
	printf("Notas: %d\n", somaNota1);
	
	printf("Nome : %s\n", finalista2);
	printf("Notas: %d\n", somaNota2);
	
	printf("Nome : %s\n", finalista3);
	printf("Notas: %d\n\n", somaNota3);
	
	if(somaNota1 > somaNota2 && somaNota1 > somaNota3)
		printf("%s foi o vencedor com a nota: %d", finalista1, somaNota1);
	else if(somaNota2 > somaNota1 && somaNota2 > somaNota3)
		printf("%s foi o vencedor com a nota: %d", finalista2, somaNota2);
	else if(somaNota3 > somaNota2 && somaNota3 > somaNota1)
		printf("%s foi o vencedor com a nota: %d", finalista3, somaNota3);
	

	
	
	return 0;
}
