//Elabore um algoritmo que escreva o signo do zodíaco correspondente ao dia e mês informado.
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes;
	
	printf("Saiba qual o seu signo\n");
	printf("Informe o dia em que você nasceu: \n");
		scanf("%d", &dia);
	printf("Informe o mês: \n");
		scanf("%d", &mes);
		
	switch(mes){
		case 1:
			if(dia >= 1 && dia <= 20)
				printf("Capricórnio");
			if(dia >= 20 && dia <= 31)
				printf("Aquário");break;
				
		case 2:
			if(dia >= 1 && dia <= 19)
				printf("Aquário");
			if(dia >= 20 && dia <= 28)
				printf("Peixes");break;
		
		case 3:
			if(dia >= 1 && dia <= 20)
				printf("Peixes");
			if(dia >= 21 && dia <= 31)
				printf("Áries");break;
		
		case 4:
			if(dia >= 1 && dia <= 20)
				printf("Áries");
			if(dia >= 21 && dia <= 30)
				printf("Touro");break;
		
		case 5:
			if(dia >= 1 && dia <= 20)
				printf("Touro");
			if(dia >= 21 && dia <= 31)
				printf("Gêmeos");break;
				
		case 6:
			if(dia >= 1 && dia <= 20)
				printf("Gêmeos");
			if(dia >= 21 && dia <= 30)
				printf("Câncer");break;
		
		case 7:
			if(dia >= 1 && dia <= 21)
				printf("Câncer");
			if(dia >= 22 && dia <= 31)
				printf("Leão");break;
				
		case 8:
			if(dia >= 1 && dia <= 22)
				printf("Leão");
			if(dia >= 23 && dia <= 31)
				printf("Virgem");break;
				
		case 9:
			if(dia >= 1 && dia <= 22)
				printf("Virgem");
			if(dia >= 23 && dia <= 30)
				printf("Libra");break;
		
		case 10:
			if(dia >= 1 && dia <= 22)
				printf("Libra");
			if(dia >= 23 && dia <= 31)
				printf("Escorpião");break;
		
		case 11:
			if(dia >= 1 && dia <= 21)
				printf("Escorpião");
			if(dia >= 22 && dia <= 30)
				printf("Sagitário");break;
				
		case 12:
			if(dia >= 1 && dia <= 21)
				printf("Sagitário");
			if(dia >= 22 && dia <= 31)
				printf("Capricórnio");break;
		
		default: printf("Data inválida.");break;
	}
	
	return 0;
}
