//Complete os exercícios 1 (multa no eixão) e 3 (triângulo) com uma mensagem para quando a 
//condição não for satisfeita (falsa).
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float velo;
	char placa[7];
	
	printf("Informe a velocidade que você está: ");
		scanf("%f", &velo);
	printf("Informe a placa do seu carro: ");
		scanf("%s", &placa);
		
	if(velo >=80){
		printf("O veículo de placa %s está a %.0fkm/h e será multado.",placa, velo);
	}
	else{
		printf("O veículo de placa %s está a %0.fkm/h e não será multado.",placa, velo);
	}
	return 0;
}
