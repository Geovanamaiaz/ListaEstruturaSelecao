#include<stdio.h>
int main(){

    //Declaracao de variaveis
    float salario_funcionario = 0, salario_reajustado = 0;

    //Entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario_funcionario);

    //Processamento
    salario_reajustado = salario_funcionario + (salario_funcionario * 0.30);
    
    
    //Condicional e saida de dados
    if(salario_funcionario > 5.000){
        printf("Salario reajustado: R$ %.2f\n",salario_reajustado);
    }else{
        printf("Funcionario nao tem direito ao aumento\n");
    }

    return 0;
}