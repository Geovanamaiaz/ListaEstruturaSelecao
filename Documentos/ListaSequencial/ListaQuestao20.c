#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int valor1 = 0, valor2 = 0;
    int soma = 0, resto1, resto2;
    float media = 0;
    
    //Entrada de dados
    printf("Digite o primeiro valor: "); //2
    scanf("%d",&valor1);
    
    printf("Digite o segundo valor: "); //3
    scanf("%d",&valor2);
    
    //Processamento
    soma = valor1 + valor2;
    resto1 = soma % valor1; 
    resto2 = soma % valor2; 
    media = soma / 2.0;
   
    //Saida de dados
    printf("A soma dos valores : %d\n",soma);
    printf("O resto da divisao da soma pelo primeiro valor: %d\n",resto1);
    printf("O resto da divisao da soma pelo segundo valor: %d\n",resto2);
    printf("A media dos valores: %.2f\n",media);
    
    return 0;
}