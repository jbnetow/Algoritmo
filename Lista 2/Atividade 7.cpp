//Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, x;
	
	printf("Informe o primeiro valor: \n");
		scanf("%d", &a);
	printf("Informe o segundo valor: \n");
		scanf("%d", &b);
		
	if(a > b){
		x = a - b;
		printf("A diferença entre %d e %d é igual a %d",a,b,x);
	}
	else{
		x = b - a;
		printf("A diferença entre %d e %d é igual a %d",b,a,x);
	}
	
	return 0;
}
