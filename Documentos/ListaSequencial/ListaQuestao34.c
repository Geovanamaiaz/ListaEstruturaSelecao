#include<stdio.h>
int main(){
    //Declaracao de variaveis
    float altura_degrau, altura_desejada;
    float quantidade_degraus;
    //Entrada de dados
    printf("Digite a altura do degrau da escada: ");
    scanf("%f",&altura_degrau);
    printf("Digite a altura que deseja atingir subindo a escada: ");
    scanf("%f",&altura_desejada);
    //Processamento
    quantidade_degraus = (altura_desejada / altura_degrau);
    //Saida de dados
    printf("Quantidade de graus devera subir para acalcar o objetivo: %.2f\n",quantidade_degraus);
    
    return 0;
}