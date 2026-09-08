#include<stdio.h>
int main(){

    /*Efetuar a leitura de quatro número e apresentar os números que são divisíveis por 2 e
3.*/

    //Declaração de variaveis
    int n1, n2, n3, n4;

    //Entrada de dados
    printf("Digite o primeiro numero: "); //4
    scanf("%d", &n1);
 
    printf("Digite o segundo numero: "); //5
    scanf("%d", &n2);

    printf("Digite o terceiro numero: "); //6
    scanf("%d", &n3);

    printf("Digite o quarto numero: ");  //7
    scanf("%d", &n4);

    //Condicional
    if (n1 % 2 == 0 && n1 % 3 == 0) { // 4 % 2 == 0 e 4 % 3 == 0 Falso
        printf("%d\n", n1);
    }
    if (n2 % 2 == 0 && n2 % 3 == 0) { //5 % 2 == 0 e 5 % 3 == 0 falso
        printf("%d", n2);
    }
    if (n3 % 2 == 0 && n3 % 3 == 0) {  // 6 % 2 == 0 e 6 % 3 == 0 verdadeiro
        printf("%d\n", n3);
    }
    if (n4 % 2 == 0 && n4 % 3 == 0) {   //7 % 2 == 0 e 7 % 3 == 0 falso
        printf("%d\n", n4);
    }
    return 0;
}
