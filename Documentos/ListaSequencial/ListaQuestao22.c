#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int valor1, valor2, valor3, valor4, valor5;
    int soma,valor_pagamento = 0, troco = 0;
    
    //Entrada de dados
    printf("Digite o primeiro valor do primeiro produto: ");
    scanf("%d",&valor1);
    
    printf("Digite o valor do segundo produto: ");
    scanf("%d",&valor2);
    
    printf("Digite o valor do terceiro produto: ");
    scanf("%d",&valor3);
    
    printf("Digite o valor do quarto produto: ");
    scanf("%d",&valor4);
    
    printf("Digite o valor do quinto produto: ");
    scanf("%d",&valor5);
    
    printf("Digite o valor do pagamento: ");
    scanf("%d",&valor_pagamento);
    
    //Processamento
    soma = valor1 + valor2 + valor3 + valor4 + valor5;
    troco = valor_pagamento - soma;
    
    //Saida de dados
    printf("O valor total dos produtos: %d\n", soma);
    printf("O valor do troco: %d\n", troco);
    
    return 0;
}