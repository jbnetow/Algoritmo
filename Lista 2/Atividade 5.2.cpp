//Complete os exerc�cios 1 (multa no eix�o) e 3 (tri�ngulo) com uma mensagem para quando a 
//condi��o n�o for satisfeita (falsa).
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float velo;
	char placa[7];
	
	printf("Informe a velocidade que voc� est�: ");
		scanf("%f", &velo);
	printf("Informe a placa do seu carro: ");
		scanf("%s", &placa);
		
	if(velo >=80){
		printf("O ve�culo de placa %s est� a %.0fkm/h e ser� multado.",placa, velo);
	}
	else{
		printf("O ve�culo de placa %s est� a %0.fkm/h e n�o ser� multado.",placa, velo);
	}
	return 0;
}
