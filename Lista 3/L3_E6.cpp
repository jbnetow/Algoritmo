//Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média 
//das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os 
//resultados solicitados quando for fornecida uma nota negativa.
#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float notaAlunos, mediaMasculina, mediaFeminina;
	int sexoMasculino=0, sexoFeminino=0;
	char sexo;
	
	do{
		printf("Informe a nota do aluno: ");
			scanf("%f", &notaAlunos);
		fflush(stdin);
		
		if(notaAlunos >=0){
			printf("Informe o sexo do aluno(M ou F): ");
				scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper(sexo);
		}
		
		if(sexo == 'M'){
			sexoMasculino++;
			mediaMasculina = mediaMasculina + notaAlunos;
		}
		else if(sexo == 'F'){
			sexoFeminino++;
			mediaFeminina = mediaFeminina + notaAlunos;
		}
		sexo = 'O';
	}while(notaAlunos >=0);
	
	mediaMasculina = mediaMasculina / sexoMasculino;
	mediaFeminina = mediaFeminina / sexoFeminino;
	
	printf("A media dos %d homens é igual a: %.2f\n", sexoMasculino, mediaMasculina);
	printf("A media das %d mulheres é igual a: %.2f", sexoFeminino, mediaFeminina);
	
	
	
	
	
	
	
	
	
	return 0;
}
