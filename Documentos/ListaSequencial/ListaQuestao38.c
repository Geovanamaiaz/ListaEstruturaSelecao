#include<stdio.h>
int main(){
    
    /*Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem,
utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância
percorrida (distância = tempo * velocidade).*/

    //Declaracao de variaveis
    float tempo_gasto = 0, velocidade_media = 0;
    float distancia_percorrida = 0, combustivel_gasto = 0;
    
    //Entrada de dados
    printf("Digite tempo gasto na viagem: ");
    scanf("%f",&tempo_gasto);
    
    printf("Digite a velocidade media: ");
    scanf("%f",&velocidade_media);
    
    //Processamento
    distancia_percorrida = tempo_gasto * velocidade_media;
    combustivel_gasto = distancia_percorrida / 12;
    
    //Saida de dados
    printf("Distancia percorrida: %.2f km\n",distancia_percorrida);
    printf("Combustivel gasto: %.2f litros\n",combustivel_gasto);

    return 0;
}