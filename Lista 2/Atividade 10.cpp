//Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual 
//o menor deles, mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo. 

#include<stdio.h> //entrada e sa�da de dados
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
		
		
	//usu�rio digitou 30, 20, 10	
	if(n1 < n2 && n1 < n3){ //30 < 20 F, 30 < 10 F
		printf("Esse � o menor valor: %.1f", n1); // N�o executa
	}
	else if(n2 < n1 && n2 < n3){ // 20 < 30 V, 20 < 10 F
		printf("Esse � o menor valor: %.1f",n2); // N�o executa
	}
	else{ //10 < 20 V, 10 < 30 V
		printf("Esse � o menor valor: %.1f", n3); // Resultado
	}
		
	
	
	return 0;
}
