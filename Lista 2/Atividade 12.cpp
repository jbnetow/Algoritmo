/*Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual 
cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��
*/

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ddd;
	
	printf("Informe o ddd desejado: ");
		scanf("%d", &ddd);
		
	switch(ddd){
		case 61: printf("Bras�lia"); break;
		case 71: printf("Salvador"); break;
		case 11: printf("S�o Paulo"); break;
		case 21: printf("Rio de Janeiro"); break;
		case 32: printf("Juiz de Fora"); break;
		case 19: printf("Campinas"); break;
		case 27: printf("Vit�ria"); break;
		case 31: printf("Belo Horizonte"); break;
		default: printf("Uma cidade no Brasil sem identifica��o");
	}
	
	
	return 0;
}
