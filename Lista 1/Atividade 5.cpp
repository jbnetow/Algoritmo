//Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a 
//quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o 
//construtor tem a quantidade total de fios em metros a serem utilizados na instala��o 
//el�trica da obra e que cada rolo de fio tem 50 metros.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int metros, rolos, sobra;
	printf("Informe a quantidade de metros necess�rios: ");
		scanf("%d", &metros);
	rolos = metros / 50;
	sobra = metros % 50;
	if(sobra>=1){
		
	printf("A quantidade de rolos necess�rios ser�: %d \n", rolos);
	printf("A quantidade de metros avulsos ser�: %d \t", sobra,"metro(s)");
		}
	else{
		printf("A quantidade de rolos necess�rios ser� de: %d \n", rolos);
	}
	
	return 0;
}
