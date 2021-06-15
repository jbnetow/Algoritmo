///Nome completo: José Batista Neto Matrícula: UC21105755 Curso: Engenharia de Software

#include<stdio.h>//cabeçalho padrão de entrada/saída
#include<locale.h>//função para fazer a adaptação do programa ao idioma desejado.
#include<string.h>//para manipulação de cadeias de caracteres e regiões de memória.
#include<ctype.h>//biblioteca p/ as funções isalpha isdigit toupper tolower
#include<stdlib.h>//possui funções envolvendo alocação de memória, controle de processos, conversões e outras. 

//Uso do clean code
//capitulo 2: Nomes significativos
//capitulo 5: Formatacao - Espacamento vertical entre conceitos

int main(){//Inicio do código
	setlocale(LC_ALL, "Portuguese");//Defifindo linguagem
	
	int sessoes, pessoasAssistiram, idade;//Valores inteiros
	char nomeDoFilme[50], sexo;//valores de caracteres
	
	//Receber o numero de sessoes que ira ocorrer, com o maximo de 2 sessoes
	
	printf("--------------------------------\n");//Interação com o usuário, mostrando mensagem na tela
	printf("Bem vindo ao cinema de Brasília!\n");
	printf("--------------------------------\n");

	do{//início do laço
		printf("Por favor, informe o número de sessões(2): ");//Interação com o usuário, mostrando mensagem na tela
			scanf("%d", &sessoes);//Recebe valor a variável
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		if(sessoes!=2)//se a condição for falsa, o print abaixo é executado
			printf("Número de sessões inválido! Digite novamente.\n");//Interação com o usuário, mostrando mensagem na tela, resultado do if
	}while(sessoes != 2);//fim do laço
	
	
	
	//Receber o nome do filme
	
	do{//início do laço
		printf("Informe o nome do filme: ");//Interação com o usuário, mostrando mensagem na tela
			fgets(nomeDoFilme, 50, stdin);//receber valor a variável
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		if(strlen(nomeDoFilme) <=1)//Verificar se a string não está vazia
			printf("Filme não encontrado! Tente novamente.\n");
		else{//condição contrária do if
			printf("-----------------------------\n");//Interação com o usuário, mostrando mensagem na tela
			printf("Filme encontrado com sucesso.\n");
			printf("-----------------------------\n");
		}
	}while(strlen(nomeDoFilme) <=1);//fim do laço
	

	
	
	//Solicitar a quantidade de pessoas que irao assistir ao filme
	
	do{//início
		printf("Informe quantas pessoas assistiram o filme(Mínimo de 10):\n ");//Interação com o usuário, mostrando mensagem na tela
			scanf("%d", &pessoasAssistiram);//receber valor a variável
			fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		if(pessoasAssistiram <10)// condição se
			printf("Valor de pessoas inválido, tente novamente com o mínimo de 10 pessoas.\n");//Interação com o usuário, mostrando mensagem na tela
	}while(pessoasAssistiram <10);//fim do laço
	
	
	
	//Nova funcionalidade
	int generoFilme, generoAcao=0, generoAventura=0, generoDrama=0,generoComedia=0,generoRomance=0,generoFiccao=0,generoTerror=0;//declarando variáveis inteiras

	
	for(int i=0; i<pessoasAssistiram; i++){//início da estrutura de repetição
	do{//início do laço
		printf("Escreva o gênero de filme preferido de cada pessoa: \n");//Interação com o usuário, mostrando mensagem na tela
		printf("1 - Ação\n");
        printf("2 - Aventura\n");
        printf("3 - Drama\n");
        printf("4 - Comédia\n");
        printf("5 - Romance\n");
        printf("6 - Ficção\n");
        printf("7 - Terror\n");
        printf("Pessoa número %d: ", i + 1);
        	scanf("%d", &generoFilme);//receber valor a variável
        fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
        
    	
        
        if(generoFilme <1 || generoFilme>7 || isalpha(generoFilme))//condição se
        	printf("Numero inválido, digite novamente\n");//Interação com o usuário, mostrando mensagem na tela
        
	}while(generoFilme <1 || generoFilme>7 || isalpha(generoFilme));//fim do laço
	
	switch(generoFilme){
		case 1: generoAcao++;break;
		case 2: generoAventura++;break;
		case 3: generoDrama++;break;
		case 4: generoComedia++;break;
		case 5: generoRomance++;break;
		case 6: generoFiccao++;break;
		case 7: generoTerror++;break;
		default: printf("Numero inválido, digite novamente.");
	}	
}

		
	
	
	//Solicitar sexo e idade das pessoas
	
	int contador, crianca =0, adolescente=0, adulto=0, idoso=0, sexoMasculino=0, sexoFeminino=0, F, M, masculinoMaiorIdade=0, femininoMaiorIdade=0;

	//Solicitando idade
	
	for(contador=0; contador<pessoasAssistiram;contador++){//início da estrutura de repetição
	do{//início do laço
		printf("Informe a idade de cada pessoa que assistiu:\n ");//Interação com o usuário, mostrando mensagem na tela
		printf("Pessoa número %d: ", contador +1);//contador +1, porque o contador começa em 0
			scanf("%d", &idade);//receber valor a variável
		fflush(stdin);//receber valor a variável
		if(idade <3 || idade >100 || isalpha(idade))//condição se
			printf("Idade inválida, digite novamente\n");//Interação com o usuário, mostrando mensagem na tela
	}while(idade<3 || idade >100 || isalpha(idade));//fim do laço
	
		
	//Solicitando sexo
	do{//início do laço
		printf("Informe o sexo de cada pessoa que assistiu(F para feminino e M para masculino): \n ");//Interação com o usuário, mostrando mensagem na tela
		printf("Pessoa número %d: ", contador +1);
			scanf("%c", &sexo);//recever valor a variável
		sexo = toupper(sexo);//Converte caracter minúsculo em maiúsculo.
		fflush(stdin);//descarrega os buffers de saída de um fluxo de dados
		if(sexo != 'F' && sexo != 'M')//condição se
			printf("Sexo inválido, digite novamente.\n");//Interação com o usuário, mostrando mensagem na tela
		system("cls");//Limpar a tela assim que a idade e o sexo de cada pessoa forem enviados
	}while(sexo != 'F' && sexo != 'M');//fim do laço
	
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
	printf("Filme: %s", nomeDoFilme);////Interação com o usuário, mostrando mensagem na tela
	printf("---------------------------------------------------------------\n");
	printf("Pessoas do sexo feminino que assistiram ao filme: %d\n", sexoFeminino);
	printf("Pessoas do sexo masculino que assistiram ao filme: %d\n", sexoMasculino);
	printf("---------------------------------------------------------------\n");
	printf("Pessoas que assistiram o filme, de acordo com sua faixa etária\n");
	printf("---------------------------------------------------------------\n");
	printf("Crianças: %d\n", crianca);
	printf("Adolescentes: %d\n", adolescente);
	printf("Adultos: %d\n", adulto);
	printf("Idosos: %d\n", idoso);
	printf("Pessoas do sexo feminino maiores de idade: %d\n", femininoMaiorIdade);
	printf("Pessoas do sexo masculino maiores de idade: %d\n", masculinoMaiorIdade);
	
	//Nova funcionalidade
	
	printf("---------------------------------------------------------------\n");//Interação com o usuário, mostrando mensagem na tela
	printf("Gêneros de filme preferidos:\n");
	printf("---------------------------------------------------------------\n");
	printf("Ação: %d\n", generoAcao);
	printf("Aventura: %d\n", generoAventura);
	printf("Drama: %d\n", generoDrama);
	printf("Comédia: %d\n", generoComedia);
	printf("Romance: %d\n", generoRomance);
	printf("Ficção: %d\n", generoFiccao);
	printf("Terror: %d\n", generoTerror);
		
	
	return 0;
}

