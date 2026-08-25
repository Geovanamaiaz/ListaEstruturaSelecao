#include<stdio.h>
int main(){
    
    //Declaração de varíaveis
    float salario_funcionario = 0, salario_minimo = 0, qtd_salarios = 0;
    
    //Entrada de dados
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario_funcionario);
    
    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salario_minimo);
    
    //Processamento
    qtd_salarios = salario_funcionario / salario_minimo;
    
    //Saída de dados
    printf("O funcionario recebe: R$ %.f salarios minimos\n",qtd_salarios);

    return 0;
}