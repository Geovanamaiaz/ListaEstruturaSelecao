#include<stdio.h>
int main(){

    /*Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
qual a operação aritmética escolhida:

Símbolo Operação aritmética
+ adição
- subtração
* multiplicação
/ divisão*/

   //Declaração de varíaveis
    int n1, n2;
    char operacao;
    float resultado;

    //Entrada de dados
    printf("Digite o primeiro numero: "); //3
    scanf("%d", &n1);

    printf("Digite o segundo numero: ");  //3
    scanf("%d", &n2);

    printf("Digite a operacao (+, -, *, /): "); // +
    scanf(" %c", &operacao);
    
    //Condicional e saída de dados
    switch (operacao) {
        case '+':
            resultado = n1 + n2; // 3 + 3 = 6
            break;

        case '-':
            resultado = n1 - n2;
            break;

        case '*':
            resultado = n1 * n2;
            break;

        case '/':
            resultado = (float)n1 / n2;
            break;

        default:
            printf("Operacao invalida!\n");
            return 0;
    }
    printf("Resultado: %.2f\n", resultado); // 6

    return 0;
}