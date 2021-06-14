//Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual 
//o menor deles, mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo. 

#include<stdio.h> //entrada e saída de dados
#include<locale.h> //definir linguagem
int main(){
	setlocale(LC_ALL, "Portuguese");//linguagem
	
	float n1, n2, n3;
	
	printf("Digite o primeiro valor: "); //receber valores
		scanf("%f", &n1); //ler os valores
	printf("Digite o segundo valor: "); //receber valores
		scanf("%f", &n2); //ler os valores
	printf("Digite o terceiro valor: "); //receber valores
		scanf("%f", &n3); //ler os valores
		
		
	//usuário digitou 30, 20, 10	
	if(n1 < n2 && n1 < n3){ //30 < 20 F, 30 < 10 F
		printf("Esse é o menor valor: %.1f", n1); // Não executa
	}
	else if(n2 < n1 && n2 < n3){ // 20 < 30 V, 20 < 10 F
		printf("Esse é o menor valor: %.1f",n2); // Não executa
	}
	else{ //10 < 20 V, 10 < 30 V
		printf("Esse é o menor valor: %.1f", n3); // Resultado
	}
		
	
	
	return 0;
}
