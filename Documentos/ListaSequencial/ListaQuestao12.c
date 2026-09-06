#include<stdio.h>
int main(){
    
    /*Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o valor do imposto de
renda a ser pago, sabendo que o imposto equivale a 5% do salário.*/

    //Declaracao de variaveis
    float salario_funcionario = 0, novo_salario = 0;
    
    //Entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario_funcionario);
    
    //Processamento
    novo_salario = salario_funcionario + (salario_funcionario * 0.5);
    
    //Saida de dados
    printf("O novo salario do funcionario eh: %.2f\n",novo_salario);
    
    return 0;
} 