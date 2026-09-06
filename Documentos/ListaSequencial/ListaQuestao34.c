#include<stdio.h>
int main(){
    
    /*Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura
que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
subir para atingir seu objetivo.*/

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