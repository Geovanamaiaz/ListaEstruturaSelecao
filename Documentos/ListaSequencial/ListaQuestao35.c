#include<stdio.h>
int main(){
    
     /*Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa
corpórea. Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em
metros).*/
    
    //Declaracao de variaveis
    float peso = 0, altura = 0;
    float imc = 0;
    
    //Entrada de dados
    printf("Digite sua altura: ");
    scanf("%f",&altura);
   
    printf("Digite seu peso: ");
    scanf("%f",&peso);
    
    //Processamento
    imc = peso / (altura * altura);
    
    //Saida de dados 
    printf("Imc: %.2f\n",imc);
    
    return 0;
}