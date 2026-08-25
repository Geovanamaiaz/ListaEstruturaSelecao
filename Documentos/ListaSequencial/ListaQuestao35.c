#include<stdio.h>
int main(){
   
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