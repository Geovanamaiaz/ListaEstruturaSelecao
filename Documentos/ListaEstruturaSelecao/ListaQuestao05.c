#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float salario_funcionario = 0, salario_reajustado = 0;

    //Entrada de dados
    printf("Digite seu salario: "); //2500
    scanf("%f",&salario_funcionario);

    //Condicional e saida de dados // 2500>300
    if(salario_funcionario <=300){ 
        salario_reajustado = salario_funcionario + (salario_funcionario * 0.50);
    }else{
        salario_reajustado = salario_funcionario + (salario_funcionario * 0.30); // 2500 + (2500 * 0.30) = 2500 + 750 = 3250
    }

    printf("Salario reajustado: R$ %.2f\n",salario_reajustado); //  R$3250,00
    
    return 0;
}
