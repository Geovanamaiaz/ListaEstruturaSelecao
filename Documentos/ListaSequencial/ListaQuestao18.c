#include<stdio.h>
int main(){
    
    //Declaração de variaveis
    int quantidade1 = 0, quantidade2 = 0, quantidade3 = 0;
    int valor1 = 0, valor2 = 0, valor3 = 0;
    int valor_total = 0;
    
    //Entrada de dados
    printf("Digite a quantidade do primeiro produto: ");
    scanf("%d",&quantidade1);
    
    printf("Digite o valor do primeiro produto: ");
    scanf("%d",&valor1);
    
    printf("Digite a quantidade do segundo produto: ");
    scanf("%d",&quantidade2);
    
    printf("Digite o valor do segundo produto: ");
    scanf("%d",&valor2);
    
    printf("Digite a quantidade do terceiro produto: ");
    scanf("%d",&quantidade3);
   
    printf("Digite o valor do terceiro produto: ");
    scanf("%d",&valor3);
    
    //Processamento
    valor_total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);
    
    //Saída de dados
    printf("O valor total dos produtos: %d\n", valor_total);
    
    return 0;
}