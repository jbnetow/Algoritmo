#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes, ano, calculoAno;
	
	printf("Verifica��o de data:\n");
	printf("Informe o dia: \n");
		scanf("%d", &dia);
	fflush(stdin);
	printf("Informe o m�s: \n");
		scanf("%d", &mes);
	fflush(stdin);
	printf("Informe o ano: \n");
		scanf("%d", &ano);
	fflush(stdin);
	
	calculoAno = ano % 4;
		
	if(dia < 1 || dia > 31)
		printf("Data inv�lida");
	else if(mes < 1 || mes > 12)
		printf("Data inv�lida");
	else if(ano < 1)
		printf("Data inv�lida");
	
	else{
		switch(dia){
			case 1 ... 28: printf("Data v�lida.");break;
			case 29:
				if(mes == 2 && calculoAno == 0)
					printf("Data v�lida");
				else
					printf("Data inv�lida");break;
			case 30:
				if(mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia == 30)
					printf("Data v�lida");break;
			case 31:
				if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia == 31)
					printf("Data v�lida");break;
			default: printf("Data inv�lida.");break;
		}
	}
				
	
			
	
	
	return 0;
}
