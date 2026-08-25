#include<stdio.h>
int main(){ 
    
    //Declaracao de variaveis
    int peso, peso_gramas;
    float novo_peso = 0;
    
    //Entrada de dados
    printf("Digite o peso da pessoa em (kg): ");
    scanf("%d",&peso);
    
    //Processamento
    peso_gramas = peso * 1000;
    novo_peso = peso_gramas + (peso_gramas * 5 / 100);
    
    //Saida de dados
    printf("O peso em gramas : %d\n", peso_gramas);
    printf("O novo peso : %.2f\n", novo_peso);
    
    return 0;
}