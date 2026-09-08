#include<stdio.h>
int main(){

    /*Faça um programa que receba um número, verifique se este número é par ou ímpar e
imprima a mensagem*/
    
    //Declaração de variáveis
    int numero = 0;

    //Entrada de dados
    printf("Digite um numero:"); //5
    scanf("%d",&numero);

    //Condicional e saída de dados
    if(numero % 2 == 0){     //5 % 2 = 1
        printf("O numero %d é par\n",numero);
    }else{
        printf("O numero %d é impar\n",numero); //O numero 5 é impar
    }
    return 0;
}
