//Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.

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
		printf("A diferen�a entre %d e %d � igual a %d",a,b,x);
	}
	else{
		x = b - a;
		printf("A diferen�a entre %d e %d � igual a %d",b,a,x);
	}
	
	return 0;
}
