#include<stdio.h>
int main(){
    
    /*Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário
sabendo-se que este sofreu um aumento de 25%.*/
    
    //Declaracao de variaveis
    float salario_funcionario = 0, novo_salario = 0;
    
    //Entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario_funcionario);
    
    //Processamento
    novo_salario = salario_funcionario + (salario_funcionario * 25 / 100);
    
    //Saida de dados
    printf("O novo salario do funcionario: %.2f\n",novo_salario);
   
    return 0;
}