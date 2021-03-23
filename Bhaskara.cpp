//Entrada: a, b, c
//Saída: x' e x''
//Processamento: calculo
#include<stdio.h>// biblioteca para entrada e saída de dados: printf, scanf
#include<math.h>//biblioteca matematica
int main(){//função para inicio do algoritmo
	double a, b, c, x1, x2, delta;//declarando variaveis
	printf("Digite o valor de a: ");//Mostrar a mensagem na tela
	scanf("%lf", &a);//Leitura da resposta do printf acima
	printf("Digite o valor de b: ");
	scanf("%lf", &b);
	printf("Digite o valor de c: ");
	scanf("%lf", &c);
	
	//CONDIÇÃO: NÃO POSSO DIVIDIR POR ZERO
	// SE (A == 0) ENTÃO
	// ESCREVA("IMPOSSIVEL CALCULAR")
	// SENÃO
	//CALCULE
	
	delta = pow(b,2) -4*a*c;
	
	
	//e - and, &&
	//ou -or, //
	
	if (a == 0 or delta < 0) // ==(igual) !=(diferente) <(menor) >(maior) <=(menor igual) >=(maior igual)
	{
	printf("Inpossivel calcular\n");
    }
	else //senão 
		{
		x1 = (-(b) + sqrt(delta)) / (2*a);
		x2 = (-(b) - sqrt(delta)) / (2*a);
		//sqrt( )Calcula raiz quadrada
		//pow(variável, expoente)potenciação
		
		printf("X1 = %.2lf \t X2 = %.2lf \n",x1,x2);//formula de bhaskara de forma linear
		// \t - tab
		// \n - enter
		}
		

	
	
	
	
return 0;//retorno da função

	
}//final do algoritmo
