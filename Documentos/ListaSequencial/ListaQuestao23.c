#include<stdio.h>
int main(){
    
    /*Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o
valor de B, B fique com o valor de C e C fique com o valor de A.*/

    //Declaracao de variaveis
    int a, b, c, temp;
    
    //Entrada de dados
    printf("Digite o valor a: "); //3
    scanf("%d",&a);
    
    printf("Digite o valor b: "); //2
    scanf("%d",&b);
    
    printf("Digite o valor c: "); //1
    scanf("%d",&c);
    
    //Processamento
    temp = a; 
    a = b;  
    b = c;   
    c = temp;
    
    //Saida de dados
    printf("O valor do primeiro numero: %d\n", a);
    printf("O valor do segundo numero: %d\n", b);
    printf("O valor do terceiro numero: %d\n", c);

    return 0;
}