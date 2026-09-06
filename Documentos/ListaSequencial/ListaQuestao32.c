#include<stdio.h>
int main(){
    
    /*Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com
aumento de 37%.*/

    //Declaracao de variaveis
    float salario = 0, aumento = 0, novo_salario = 0;
    
    //Entrada de dados
    printf("Digite o salario: ");
    scanf("%f",&salario);
    
    //Processamento
    aumento = salario * 37/100;
    novo_salario = salario + aumento;
    
    //Saida de dados
    printf("O novo salario: %.2f\n",novo_salario);
    
    return 0;
}