#include<stdio.h>
int main(){
    
    //Declaração de varíaveis
    float num1, num2;
    float divisao = 0;
    
    //Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    
    //Processamento
    divisao = num1/num2;
    
    //Saída de dados
    printf("Resultado da divisao: %.2f\n",divisao);
    
    return 0;
}