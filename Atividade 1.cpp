//Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o correspondente em minutos e segundos destas horas.

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int h, m, s;
	printf("Informe as horas: ");
	scanf("%d", &h);
	m = h * 60;
	s = m * 60;
	printf("Horas em minutos s�o: %d\n", m);
	printf("Horas em segundos s�o: %d ", s);
	
	return 0;
}
