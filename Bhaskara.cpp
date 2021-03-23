//Entrada: a, b, c
//Sa�da: x' e x''
//Processamento: calculo
#include<stdio.h>// biblioteca para entrada e sa�da de dados: printf, scanf
#include<math.h>//biblioteca matematica
int main(){//fun��o para inicio do algoritmo
	double a, b, c, x1, x2, delta;//declarando variaveis
	printf("Digite o valor de a: ");//Mostrar a mensagem na tela
	scanf("%lf", &a);//Leitura da resposta do printf acima
	printf("Digite o valor de b: ");
	scanf("%lf", &b);
	printf("Digite o valor de c: ");
	scanf("%lf", &c);
	
	//CONDI��O: N�O POSSO DIVIDIR POR ZERO
	// SE (A == 0) ENT�O
	// ESCREVA("IMPOSSIVEL CALCULAR")
	// SEN�O
	//CALCULE
	
	delta = pow(b,2) -4*a*c;
	
	
	//e - and, &&
	//ou -or, //
	
	if (a == 0 or delta < 0) // ==(igual) !=(diferente) <(menor) >(maior) <=(menor igual) >=(maior igual)
	{
	printf("Inpossivel calcular\n");
    }
	else //sen�o 
		{
		x1 = (-(b) + sqrt(delta)) / (2*a);
		x2 = (-(b) - sqrt(delta)) / (2*a);
		//sqrt( )Calcula raiz quadrada
		//pow(vari�vel, expoente)potencia��o
		
		printf("X1 = %.2lf \t X2 = %.2lf \n",x1,x2);//formula de bhaskara de forma linear
		// \t - tab
		// \n - enter
		}
		

	
	
	
	
return 0;//retorno da fun��o

	
}//final do algoritmo
