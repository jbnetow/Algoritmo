//Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo usu�rio (use �rea= 3.14 x raio2)

#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	double r,a;
	
	printf("Digite o valor do raio: ");
	scanf("%lf", &r);
	
	a = 3.14 * 	r * r;
	printf("A �rea � igual a: %.2lf", a);
	
	return 0;
	
	
}
