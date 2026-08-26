#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float salario_funcionario = 0, salario_reajustado = 0;

    //Entrada de dados
    printf("Digite seu salario: ");
    scanf("%f",&salario_funcionario);

    //Condicional e saida de dados
    if(salario_funcionario <=300){
        salario_reajustado = salario_funcionario + (salario_funcionario * 0.50);
    }else{
        salario_reajustado = salario_funcionario + (salario_funcionario* 0.30);
    }

    printf("Salario reajustado: R$ %.2F\n",salario_reajustado);
    
    return 0;
}