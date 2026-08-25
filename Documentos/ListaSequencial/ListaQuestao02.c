#include<stdio.h>
int main(){

    //Declaração de variaveis
    int num1, num2;
    int subtracao = 0;

    //Entrada de dados
    printf("Digite o primeiro numero:");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    
    //Processamento
    subtracao = num1 -num2;
    
    //Saida de dados
    printf("Resultado da subtracao: %d\n",subtracao);

    return 0;
}