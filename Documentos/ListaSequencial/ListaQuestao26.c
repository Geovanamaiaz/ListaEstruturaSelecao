#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float distancia = 0, velocidade = 0, tempo, = 0, velocidade_ms = 0;
    
    //Entrada de dados
    printf("Digite a distancia em km: ");
    scanf("%f", &distancia);
    
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade);
    
    //Processamento
    tempo = distancia / velocidade;
    velocidade_ms = velocidade * 1000 / 3.600;
    
    //Saida de dados
    printf("A velocidade em metros/segundo: %.2f ms\n", velocidade_ms);
    
    return 0;
}