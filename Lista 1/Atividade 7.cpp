//Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de 
//matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora 
//e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados 
//de entrada e os dados de sa�da.

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[50];
    int matr, sexo;
    float valorh, salario, horast;

    printf("Informe o nome do funcion�rio: \n");
        fgets(nome, 50, stdin);
    
    printf("Informe seu sexo: \n");
    printf("Digite 1 para Masculino\n");
    printf("Digite 2 para Feminino\n");
        scanf("%d", &sexo);

    printf("Informe o seu n�mero de matr�cula: \n");
        scanf("%d", &matr);
    printf("Informe o n�mero de horas trabalhadas: \n");
        scanf("%f", &horast);
    printf("Informe quanto recebe por hora \n");
        scanf("%f", &valorh);
    

    salario = horast * valorh;

if(sexo == 1){
        printf("-------------------\n");
        printf("Dados do funcionario\n");
        printf("-------------------\n");
        printf("Nome: %s\n", nome);
        printf("Sexo: Masculino\n");
        printf("Matr�cula: %d\n", matr);
        printf("Horas trabalahdas: %.2f \n", horast);
        printf("Valor por hora: %.2f\n", valorh);
        printf("Sal�rio: %.2f", salario);
    }
    else if (sexo == 2){
        printf("-------------------\n");
        printf("Dados do funcionario\n");
        printf("-------------------\n");

        printf("Nome: %s\n", nome);
        printf("Sexo: Feminino \n");
        printf("Matr�cula: %d \n", matr);
        printf("Horas trabalahdas: %.2f \n", horast);
        printf("Valor por hora: %.2f \n", valorh);
        printf("Sal�rio: %.2f", salario);
    }else{
        printf("-------------------\n");
        printf("Dados incorretos! Tente novamente\n");
        printf("-------------------\n");
    }
}
