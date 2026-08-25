#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float preco_produto = 0, valor_venda = 0, percentual_acrescimo = 0;
    
    //Entrada de dados
    printf("Digite o preco do produto: ");
    scanf("%f",&preco_produto);
    
    printf("Digite o percentual de acrescimo: ");
    scanf("%f",&percentual_acrescimo);
    
    //Processamento
    valor_venda = preco_produto + (preco_produto * percentual_acrescimo / 100);
   
    //Saida de dados
    printf("O valor de venda do produto : %.2f\n",valor_venda);
    
    return 0;
}