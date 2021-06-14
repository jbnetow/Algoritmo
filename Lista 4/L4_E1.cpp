#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia, mes, ano, calculoAno;
	
	printf("Verificação de data:\n");
	printf("Informe o dia: \n");
		scanf("%d", &dia);
	fflush(stdin);
	printf("Informe o mês: \n");
		scanf("%d", &mes);
	fflush(stdin);
	printf("Informe o ano: \n");
		scanf("%d", &ano);
	fflush(stdin);
	
	calculoAno = ano % 4;
		
	if(dia < 1 || dia > 31)
		printf("Data inválida");
	else if(mes < 1 || mes > 12)
		printf("Data inválida");
	else if(ano < 1)
		printf("Data inválida");
	
	else{
		switch(dia){
			case 1 ... 28: printf("Data válida.");break;
			case 29:
				if(mes == 2 && calculoAno == 0)
					printf("Data válida");
				else
					printf("Data inválida");break;
			case 30:
				if(mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11 && dia == 30)
					printf("Data válida");break;
			case 31:
				if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 && dia == 31)
					printf("Data válida");break;
			default: printf("Data inválida.");break;
		}
	}
				
	
			
	
	
	return 0;
}
