//Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao 
//motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite 
//de 80 km/h). 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float velo;
	char placa[7];
	
	printf("Informe a velocidade que você está: ");
		scanf("%f", &velo);
	fflush(stdin);
	printf("Informe a placa do seu carro: ");
		scanf("%s", placa);
		
	if(velo >=80){
		printf("O veículo de placa %s está a %.0fkm/h e será multado ",placa, velo);
	
	}

	return 0;
}
