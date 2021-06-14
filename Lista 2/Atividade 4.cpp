//Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída 
//uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo 
//feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int sexo;
	
	printf("Iforme o seu nome \n");
		fgets(nome, 50, stdin);
	fflush(stdin);
	printf("Inforome o seu sexo: \n");
	printf("Digite 1 para masculino \n");
	printf("Digite 2 para feminino \n");
		scanf("%d", &sexo);
	fflush(stdin);
		
	if(sexo == 1){
		printf("Ilmo. Sr. %s ", nome);
	}
	else if(sexo == 2){
		printf("Ilma. Sra. %s", nome);
	}
	
	return 0;
}
