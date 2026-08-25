#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float custo_espetaculo = 0, preco_convites = 0;
    float qtd_convites = 0, lucro_convites = 0;
    
    //Entrada de dados
    printf("Digite o custo do espetaculo: ");
    scanf("%f",&custo_espetaculo);
    
    printf("Digite o preco do convite: ");
    scanf("%f",&preco_convites);
   
    //Processamento
    qtd_convites = custo_espetaculo/ preco_convites;
    lucro_convites = (custo_espetaculo + (custo_espetaculo * 0.23))/ preco_convites;
   
    //Saida de dados
    printf("Quantidade de convites para alcancar: %.2f\n",qtd_convites);
    printf("Quantidade de convites opara obter 23%% de lucro: %.2f\n",lucro_convites);

    return 0;
}