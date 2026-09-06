#include<stdio.h>
int main(){

    /*Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que
calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o
valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3
.*/

    //Declaracao de variaveis
    float comprimento, = 0, largura = 0, profundidade = 0;
    float valor_construcao = 0;
    
    //Entrada de dados
    printf("Digite o comprimento da piscina: ");
    scanf("%f",&comprimento);
    
    printf("Digite a largura da piscina: ");
    scanf("%f",&largura);
    
    printf("Digite a profundidade da piscina: ");
    scanf("%f",&profundidade);
    
    //Processamento
    valor_construcao = comprimento * largura * profundidade * 45;
    
    //Saida de dados
    printf("O valor da construcao da piscina: %.2f\n",valor_construcao);
    
    return 0;
}