//Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma 
//figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).


#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float a, b, c;
	
	printf("Informe o primeiro valor: \n");
		scanf("%f", &a);
	printf("Informe o segundo valor: \n");
		scanf("%f", &b);
	printf("Informe o terceiro valor:\n");
		scanf("%f", &c);
		
	if(a < b + c && c < b + a){
		printf("Valor valido");
	}
	
	
	return 0;
}
