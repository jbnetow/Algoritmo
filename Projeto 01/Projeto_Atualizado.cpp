///Nome completo: Jos� Batista Neto Matr�cula: UC21105755 Curso: Engenharia de Software

#include<stdio.h>//cabe�alho padr�o de entrada/sa�da
#include<locale.h>//fun��o para fazer a adapta��o do programa ao idioma desejado.
#include<string.h>//para manipula��o de cadeias de caracteres e regi�es de mem�ria.
#include<ctype.h>//biblioteca p/ as fun��es isalpha isdigit toupper tolower
#include<stdlib.h>//possui fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras. 

//Uso do clean code
//capitulo 2: Nomes significativos
//capitulo 5: Formatacao - Espacamento vertical entre conceitos

int main(){//Inicio do c�digo
	setlocale(LC_ALL, "Portuguese");//Defifindo linguagem
	
	int sessoes, pessoasAssistiram, idade;//Valores inteiros
	char nomeDoFilme[50], sexo;//valores de caracteres
	
	//Receber o numero de sessoes que ira ocorrer, com o maximo de 2 sessoes
	
	printf("--------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("Bem vindo ao cinema de Bras�lia!\n");
	printf("--------------------------------\n");

	do{//in�cio do la�o
		printf("Por favor, informe o n�mero de sess�es(2): ");//Intera��o com o usu�rio, mostrando mensagem na tela
			scanf("%d", &sessoes);//Recebe valor a vari�vel
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(sessoes!=2)//se a condi��o for falsa, o print abaixo � executado
			printf("N�mero de sess�es inv�lido! Digite novamente.\n");//Intera��o com o usu�rio, mostrando mensagem na tela, resultado do if
	}while(sessoes != 2);//fim do la�o
	
	
	
	//Receber o nome do filme
	
	do{//in�cio do la�o
		printf("Informe o nome do filme: ");//Intera��o com o usu�rio, mostrando mensagem na tela
			fgets(nomeDoFilme, 50, stdin);//receber valor a vari�vel
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(strlen(nomeDoFilme) <=1)//Verificar se a string n�o est� vazia
			printf("Filme n�o encontrado! Tente novamente.\n");
		else{//condi��o contr�ria do if
			printf("-----------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
			printf("Filme encontrado com sucesso.\n");
			printf("-----------------------------\n");
		}
	}while(strlen(nomeDoFilme) <=1);//fim do la�o
	

	
	
	//Solicitar a quantidade de pessoas que irao assistir ao filme
	
	do{//in�cio
		printf("Informe quantas pessoas assistiram o filme(M�nimo de 10):\n ");//Intera��o com o usu�rio, mostrando mensagem na tela
			scanf("%d", &pessoasAssistiram);//receber valor a vari�vel
			fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(pessoasAssistiram <10)// condi��o se
			printf("Valor de pessoas inv�lido, tente novamente com o m�nimo de 10 pessoas.\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	}while(pessoasAssistiram <10);//fim do la�o
	
	
	
	//Nova funcionalidade
	int generoFilme, generoAcao=0, generoAventura=0, generoDrama=0,generoComedia=0,generoRomance=0,generoFiccao=0,generoTerror=0;//declarando vari�veis inteiras

	
	for(int i=0; i<pessoasAssistiram; i++){//in�cio da estrutura de repeti��o
	do{//in�cio do la�o
		printf("Escreva o g�nero de filme preferido de cada pessoa: \n");//Intera��o com o usu�rio, mostrando mensagem na tela
		printf("1 - A��o\n");
        printf("2 - Aventura\n");
        printf("3 - Drama\n");
        printf("4 - Com�dia\n");
        printf("5 - Romance\n");
        printf("6 - Fic��o\n");
        printf("7 - Terror\n");
        printf("Pessoa n�mero %d: ", i + 1);
        	scanf("%d", &generoFilme);//receber valor a vari�vel
        fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
        
    	
        
        if(generoFilme <1 || generoFilme>7 || isalpha(generoFilme))//condi��o se
        	printf("Numero inv�lido, digite novamente\n");//Intera��o com o usu�rio, mostrando mensagem na tela
        
	}while(generoFilme <1 || generoFilme>7 || isalpha(generoFilme));//fim do la�o
	
	switch(generoFilme){
		case 1: generoAcao++;break;
		case 2: generoAventura++;break;
		case 3: generoDrama++;break;
		case 4: generoComedia++;break;
		case 5: generoRomance++;break;
		case 6: generoFiccao++;break;
		case 7: generoTerror++;break;
		default: printf("Numero inv�lido, digite novamente.");
	}	
}

		
	
	
	//Solicitar sexo e idade das pessoas
	
	int contador, crianca =0, adolescente=0, adulto=0, idoso=0, sexoMasculino=0, sexoFeminino=0, F, M, masculinoMaiorIdade=0, femininoMaiorIdade=0;

	//Solicitando idade
	
	for(contador=0; contador<pessoasAssistiram;contador++){//in�cio da estrutura de repeti��o
	do{//in�cio do la�o
		printf("Informe a idade de cada pessoa que assistiu:\n ");//Intera��o com o usu�rio, mostrando mensagem na tela
		printf("Pessoa n�mero %d: ", contador +1);//contador +1, porque o contador come�a em 0
			scanf("%d", &idade);//receber valor a vari�vel
		fflush(stdin);//receber valor a vari�vel
		if(idade <3 || idade >100 || isalpha(idade))//condi��o se
			printf("Idade inv�lida, digite novamente\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	}while(idade<3 || idade >100 || isalpha(idade));//fim do la�o
	
		
	//Solicitando sexo
	do{//in�cio do la�o
		printf("Informe o sexo de cada pessoa que assistiu(F para feminino e M para masculino): \n ");//Intera��o com o usu�rio, mostrando mensagem na tela
		printf("Pessoa n�mero %d: ", contador +1);
			scanf("%c", &sexo);//recever valor a vari�vel
		sexo = toupper(sexo);//Converte caracter min�sculo em mai�sculo.
		fflush(stdin);//descarrega os buffers de sa�da de um fluxo de dados
		if(sexo != 'F' && sexo != 'M')//condi��o se
			printf("Sexo inv�lido, digite novamente.\n");//Intera��o com o usu�rio, mostrando mensagem na tela
		system("cls");//Limpar a tela assim que a idade e o sexo de cada pessoa forem enviados
	}while(sexo != 'F' && sexo != 'M');//fim do la�o
	
	if(idade >=3 && idade < 14)//se idade for maior igual a 3 e menor que 14
		crianca++;//crianca = crianca + 1
	else if(idade >13 && idade < 18)
		adolescente++;
	else if(idade >17 && idade < 65)
		adulto++;
	else if(idade >64 && idade <101)
		idoso++;
	if(sexo == 'M')
		sexoMasculino++;
	else if(sexo == 'F')
		sexoFeminino++;
	if(sexo == 'M' && idade >=18)
		masculinoMaiorIdade++;
	else if(sexo == 'F' && idade >=18)
		femininoMaiorIdade++;
}
		
	
system("pause");//Pedir para pressionar uma tecla caso queira ver o resultado
system("cls");//limpa a tela completamente
	printf("---------------------------------------------------------------\n");	
	printf("Filme: %s", nomeDoFilme);////Intera��o com o usu�rio, mostrando mensagem na tela
	printf("---------------------------------------------------------------\n");
	printf("Pessoas do sexo feminino que assistiram ao filme: %d\n", sexoFeminino);
	printf("Pessoas do sexo masculino que assistiram ao filme: %d\n", sexoMasculino);
	printf("---------------------------------------------------------------\n");
	printf("Pessoas que assistiram o filme, de acordo com sua faixa et�ria\n");
	printf("---------------------------------------------------------------\n");
	printf("Crian�as: %d\n", crianca);
	printf("Adolescentes: %d\n", adolescente);
	printf("Adultos: %d\n", adulto);
	printf("Idosos: %d\n", idoso);
	printf("Pessoas do sexo feminino maiores de idade: %d\n", femininoMaiorIdade);
	printf("Pessoas do sexo masculino maiores de idade: %d\n", masculinoMaiorIdade);
	
	//Nova funcionalidade
	
	printf("---------------------------------------------------------------\n");//Intera��o com o usu�rio, mostrando mensagem na tela
	printf("G�neros de filme preferidos:\n");
	printf("---------------------------------------------------------------\n");
	printf("A��o: %d\n", generoAcao);
	printf("Aventura: %d\n", generoAventura);
	printf("Drama: %d\n", generoDrama);
	printf("Com�dia: %d\n", generoComedia);
	printf("Romance: %d\n", generoRomance);
	printf("Fic��o: %d\n", generoFiccao);
	printf("Terror: %d\n", generoTerror);
		
	
	return 0;
}

