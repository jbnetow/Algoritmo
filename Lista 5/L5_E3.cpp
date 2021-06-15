/*Faça um programa que leia um caractere e apresente o caractere lido na forma caractere, decimal, octal 
e hexadecimal, sendo um em cada linha.*/
#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char x;
	
	printf("Digite um caractere: ");
		scanf("%c", &x);
		
	printf("\nCaracter: %c\nDecimal: %d\nOctal: %o\nHexadecimal: %x", x, x, x, x);	
	
	return 0;
}
