#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float valor_compra = 0, valor_prestacoes = 0;
    
    //Entrada de dados
    printf("Digite o valor da compra: ");
    scanf("%f",&valor_compra);
    
    //Processamento
    valor_prestacoes = valor_compra / 5;
   
    //Saida de dados
    printf("O valor de cada prestacao: %.2f\n",valor_prestacoes);
    
    return 0;
}
