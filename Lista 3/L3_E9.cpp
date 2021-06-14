/*Uma pesquisa sobre algumas características físicas da população de uma determinada região 
coletou os seguintes dados, referentes a cada habitante:
a) sexo (masculino, feminino);
b) cor dos olhos (azuis, verdes, castanhos, pretos);
c) cor dos cabelos (loiros, castanhos, pretos);
d) idade em anos.
Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade 
igual a –1. Fazer um algoritmo que determine e escreva:
a) a maior idade dos habitantes pesquisados;
b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos 
inclusive e que tenham olhos verdes e cabelos loiros.
*/

#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	int corOlho, corCabelo, idade, idadeAnterior, porcentagem;
	int maiorIdade=0, pessoas=0, outrasPessoas=0;
	
	do{
		printf("Informe o sexo da pessoa(F ou M):\n ");
			scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		
		printf("Digite o número referente a cor dos olhos: \n");
		printf("1 => Azuis\n");
		printf("2 => Verdes\n");
		printf("3 => Castanhos\n");
		printf("4 => Pretos\n");
			scanf("%d", &corOlho);
		fflush(stdin);
		
		
		printf("Digite o número referente a cor do cabelo:\n");
		printf("1 => Loiro\n");
		printf("2 => Castanho\n");
		printf("3 => Preto\n");
			scanf("%d", &corCabelo);
		fflush(stdin);
		
		printf("Informe a idade da pessoa:\n");
			scanf("%d", &idade);
		fflush(stdin);
		system("cls");
		
		if(idade >=0)
			pessoas++;
			
		if(idade > maiorIdade)
			maiorIdade = idade;
		
		if(sexo == 'F' && idade > 17 && idade < 36 && corOlho == 2 && corCabelo == 1)
			outrasPessoas++;
	}while(idade != -1);
	
	printf("A maior idade informada: %d\n", maiorIdade);
	porcentagem = (outrasPessoas * 100) / pessoas;
	printf("A porcentagem de mulheres loiras com olhos verdes e idade entre 18 e 35 anos é de %d por cento", porcentagem);


	
	return 0;
}
