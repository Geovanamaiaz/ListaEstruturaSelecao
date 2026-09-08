#include<stdio.h>
int main(){

    /*Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério
a seguir:

idade Classificação
0 a 2 anos Recém-nascido
3 a 11 anos criança
12 a 19 anos adolescente
20 a 55 anos adulto
Acima de 55 anos idoso*/

    //Declaração de variaveis
    int idade = 0;

    //Entrada de dados
    printf("Digite sua idade:");
    scanf("%d",&idade);

    //Condicional e Saída de dados

    if(idade >= 0 && idade <=2){
        printf("Recém nascido\n");
    }else if(idade >= 3 && idade <=11){
        printf("Criança\n");
    }else if(idade >= 12 && idade <=19){
        printf("Adolescente\n");
    }else if(idade >= 20 && idade <=55){
        printf("Adulto\n");
    }else{
        printf("Idoso\n");
    }
    return 0;
}