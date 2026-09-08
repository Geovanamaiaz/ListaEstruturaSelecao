#include<stdio.h>
int main(){
    
    /*Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
ou não.*/

    //Declaracao de variaveis
    int idade = 0;

    //Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    //Condicional e saida de dados
    if(idade >= 18){
        printf("Maior de idade\n");
    }else{
        printf("Menor de idade\n");
    }
    
    return 0;
}