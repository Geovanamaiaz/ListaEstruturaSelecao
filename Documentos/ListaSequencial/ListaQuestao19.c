#include<stdio.h>
int main(){
    
    //Declaraçâo de variaveis
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