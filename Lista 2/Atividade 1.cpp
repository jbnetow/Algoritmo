//Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao 
//motorista somente se ele ser� multado, quando estiver trafegando no Eixo Rodovi�rio (limite 
//de 80 km/h). 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float velo;
	char placa[7];
	
	printf("Informe a velocidade que voc� est�: ");
		scanf("%f", &velo);
	fflush(stdin);
	printf("Informe a placa do seu carro: ");
		scanf("%s", placa);
		
	if(velo >=80){
		printf("O ve�culo de placa %s est� a %.0fkm/h e ser� multado ",placa, velo);
	
	}

	return 0;
}
