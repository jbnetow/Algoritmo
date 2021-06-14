/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual 
cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificaçã
*/

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ddd;
	
	printf("Informe o ddd desejado: ");
		scanf("%d", &ddd);
		
	switch(ddd){
		case 61: printf("Brasília"); break;
		case 71: printf("Salvador"); break;
		case 11: printf("São Paulo"); break;
		case 21: printf("Rio de Janeiro"); break;
		case 32: printf("Juiz de Fora"); break;
		case 19: printf("Campinas"); break;
		case 27: printf("Vitória"); break;
		case 31: printf("Belo Horizonte"); break;
		default: printf("Uma cidade no Brasil sem identificação");
	}
	
	
	return 0;
}
