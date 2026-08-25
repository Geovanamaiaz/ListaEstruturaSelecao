#include<stdio.h>
int main(){
    
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