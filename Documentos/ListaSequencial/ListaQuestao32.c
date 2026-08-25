#include<stdio.h>
int main(){
    
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