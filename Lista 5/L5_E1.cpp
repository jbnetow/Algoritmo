/*Elabore um programa que solicite ao usuário um valor percentual a ser calculado. Este cálculo deverá 
ocorrer sobre um valor constante igual a 555. O programa deverá calcular o percentual desejado e 
apresentar o resultado calculado deste percentual.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int porcentual, total=555;
	
	do{
		printf("Informe o porcentual:\n");
			scanf("%d", &porcentual);
	}while(porcentual < 1 || porcentual > 100);
	
	porcentual = porcentual * total;
	porcentual = porcentual / 100;
	
	printf("%d de %d", porcentual, total);
	
	
	return 0;
}
