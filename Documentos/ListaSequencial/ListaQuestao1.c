#include<stdio.h>
int main(){
    
    //Declaracao de variaveis 
    int num1,num2;
    int soma = 0;

    //Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);
    printf("Digite outro numero: ");
    scanf("%d",&num2);
    
    //Processamento
    soma = num1 + num2;
    
    //Saida de dados
    printf("A soma dos numeros e: %d\n",soma);
    
    return 0;
}