#include<stdio.h>
#include<math.h>
int main(){
    /*Faça um programa que mostre um menu com as seguintes opções:
• soma
• raiz quadrada
• finalizar
O programa deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção
finalizar nada deve acontecer.*/

    //Declaração de varíaveis
    int opcao;
    float n1, n2;
    float resultado = 0;

    //Entrada de dados
    printf("======== MENU ======");
    printf("1 - SOMA:\n");
    printf("2 - RAIZ QUADRADA\n");
    printf("3 - FINALIZAR\n");
    printf("Digite a opcao ( 1 a 3): "); // 2
    scanf("%d",&opcao);

    //Condicional e Saída de dados
    switch (opcao){
        case 1:
           printf("Digite o primeiro numero: ");
           scanf("%f",&n1);
           printf("Digite o segundo numero: ");
           scanf("%f",&n2);

           resultado =  n1 + n2;

           printf("Resultado da soma de %.2f e %.2f: %.2f\n",n1,n2,resultado);
           break;

        case 2:
           printf("Digite o primeiro numero: "); // 4
           scanf("%f",&n1);

           resultado =  sqrt(n1); // raiz quadrada de 4 = 2

           printf("Resultado da raiz quadrada de %.2f: %.2f\n",n1,resultado); // 2 
           break;
        
        case 3:
           break;

        default:
           printf("Codigo Invalido\n");
    }
    return 0;

}