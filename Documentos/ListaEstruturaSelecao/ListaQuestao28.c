#include<stdio.h>
int main(){

    /*Verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. Se
formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.*/

    //Declaração de varíaveis
    int a, b, c;

    //Entrada de dados
    printf("Digite o primeiro lado: "); //2
    scanf("%d", &a);

    printf("Digite o segundo lado: "); //2
    scanf("%d", &b);

    printf("Digite o terceiro lado: "); //3
    scanf("%d", &c);

    //Condicional e saída de dados
    if (a + b > c && a + c > b && b + c > a) { 
        if (a == b && b == c) {
            printf("Triangulo equilatero\n");
        } else if (a == b || a == c || b == c) { // 2 = 2 ou 2 == 3 ou 2 ==3
            printf("Triangulo isosceles\n"); //Triangulo isosceles
        } else {
            printf("Triangulo escaleno\n");
        }
    } else {
        printf("Os lados nao formam um triangulo\n");
    }

    return 0;
}
