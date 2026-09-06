#include<stdio.h>
#include<math.h>
int main(){
    
    /*Faça um programa que receba um número inteiro, calcule e imprima:
    • a raiz quadrada desse número;
    • esse número elevado ao quadrado*/

    //Declaração de variaveis
    float numero;
    float raiz_quadrada = 0;
    float numero_elevado_quadrado = 0;

    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%f",&numero);
    
    //Processamento
    raiz_quadrada = sqrt(numero);
   
    //Saida de dados
    printf("A raiz quadrada de %.2f: %.2f\n", numero, raiz_quadrada);
    
    return 0;
}