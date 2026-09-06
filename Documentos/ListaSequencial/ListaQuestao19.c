#include<stdio.h>
int main(){
    
    /*Crie um programa que receba valores quaisquer e mostre a média entre eles, o somatório entre eles
e o resto da divisão do somatório por cada um dos valores.*/

    //Declaração de variaveis
    float largura = 0, comprimento = 0;
    float area_total = 0;
    
    //Entrada de dados
    printf("Digite a largura do terreno: ");
    scanf("%f",&largura);
    
    printf("Digite o comprimento do terreno: ");
    scanf("%f",&comprimento);
    
    //Processamento
    area_total = largura * comprimento;
    
    //Saída de dados
    printf("A area total do terreno: %.2f\n",area_total);
    
    return 0;
}