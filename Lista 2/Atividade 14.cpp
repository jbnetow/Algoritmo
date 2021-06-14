//Fazer um algoritmo que leia três valores, determine e imprima o maior deles.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float v1, v2, v3;
	
	printf("Digite o primeiro valor: ");
		scanf("%f", &v1);
	printf("Digite o segundo valor: ");
		scanf("%f", &v2);
	printf("Digite o terceiro valor: ");
		scanf("%f", &v3);
		
	if(v1 > v2 && v1 > v3){
		printf("Maior valor: %.1f", v1);
	}
	else if(v2 > v1 && v2 > v3){
		printf("Maior valor: %.1f", v2);
	}
	else{
		printf("Maior valor: %.1f", v3);
	}
	
	
	return 0;
}
