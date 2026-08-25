#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float valor_produto, desconto;
    
    //Entrada de dados 
    printf("Digite o valor do produto: ");
    scanf("%f",&valor_produto);
    
    //Processamento
    desconto = valor_produto - (valor_produto * 9/100);
    
    //Saida de dados
    printf("O valor do desconto é: %.2f\n", desconto);
    
    return 0;
}