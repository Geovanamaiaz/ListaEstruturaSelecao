#include<stdio.h>
int main(){
    
    /*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28%
e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao
consumidor do mesmo.*/

    //Declaracao de variaveis
    float custo_fabrica = 0, custo_consumidor = 0;
    float impostos = 0, custo_impostos = 0, distribuidor = 0;
    
    //Entrada de dados
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f",&custo_fabrica);
   
    //Processamento
    impostos = custo_fabrica * 45/100;
    custo_impostos = custo_fabrica +impostos;
    distribuidor = custo_impostos * 28/100;
    custo_consumidor = custo_impostos + distribuidor;
    
    //Saida de dados
    printf("O custo ao consumidor: %.2f\n",custo_consumidor);
    
    return 0;

}