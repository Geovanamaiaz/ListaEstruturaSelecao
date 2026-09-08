#include<stdio.h>
int main(){
    //Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente.
    
    //Declaração de varíaveis
    int n1, n2, n3;
    int temp;

    //Entrada de dados
    printf("Digite o primeiro valor: "); //3
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");  //2
    scanf("%d", &n2);

    printf("Digite o terceiro valor: ");  //5
    scanf("%d", &n3);

    //Condicional e saída de dados
    if (n1 > n2) { 
        temp = n1; 
        n1 = n2;  
        n2 = temp; 
    }
    if (n1 > n3) { 
        temp = n1;  
        n1 = n3;  
        n3 = temp;
    }
    if (n2 > n3) {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    printf("Ordem crescente: %d %d %d\n", n1, n2, n3); // 2 3 5

    return 0;
}