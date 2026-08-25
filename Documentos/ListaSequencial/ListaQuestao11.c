#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float area_quadrado = 0;
    float valor_diagonal = 0;
    
    //Entrada de dados
    printf("Digite o valor da diagonal do quadrado: ");
    scanf("%f",&valor_diagonal);
    
    //Processamento
    area_quadrado = (valor_diagonal * valor_diagonal)/2;
    
    //Saida de dados
    printf("A area do quadrado eh: %.2f\n",area_quadrado);
    
    return 0;
}
