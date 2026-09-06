#include<stdio.h>
int main(){
    
    /*Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo que
receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
imprima:
• o valor, em reais, de cada kilowatt;
• o valor, em reais, a ser pago por essa residência;
• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.*/

    //Declaracao de variaveis
    float salario_minimo = 0, quantidade_kwh = 0;
    float valor_kwh = 0, valor_total = 0,desconto = 0, valor_final = 0;
    
    //Entrada de dados
    printf("Digite o salario minimo: ");
    scanf("%f", &salario_minimo);
    
    printf("Digite a quantidade de kWh consumida: ");
    scanf("%f", &quantidade_kwh);
    
    //Processamento
    valor_kwh = salario_minimo / 5;
    valor_total = quantidade_kwh * valor_kwh;
    desconto = valor_total * 0.15;
    valor_final = valor_total - desconto;
    
    //Saida de dados
    printf("O valor de cada kwh: %.2f\n", valor_kwh);
    printf("O valor a ser pago pela residencia: R$ %.2f\n",valor_total);
    printf("O valora ser pago com 15%% e desconto : R$ %.2f\n",valor_final);

    return 0;
}