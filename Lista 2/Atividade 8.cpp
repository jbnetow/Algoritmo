//. Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o 
//peso ideal da pessoa, utilizando as seguintes fórmulas
//para homem: peso = (72.5 * altura) - 58
//para mulher: peso = (62.1 * altura) - 44.7

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int sexo;
	float alt,ideal;
	
	printf("Iforme o seu nome \n");
		fgets(nome, 50, stdin);
	printf("Inforome o seu sexo: \n");
	printf("Digite 1 para masculino \n");
	printf("Digite 2 para feminino \n");
		scanf("%d", &sexo);
	fflush(stdin);
		
	printf("Informe a sua altura(m): \n");
		scanf("%f", &alt);
	fflush(stdin);
		
		
	if(sexo == 1){
		printf("Ilmo. Sr. %s  \n", nome);
		ideal = (72.5 * alt) - 58;
		printf("Seu peso ideal é de: %.1f",ideal);
		
	}
	else if(sexo == 2){
		printf("Ilma. Sra. %s", nome);
		ideal = (62.1 * alt) - 44.7;
		printf("\nSeu peso ideal é de: %.1f",ideal);
	}
	
	return 0;
}
