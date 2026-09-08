#include<stdio.h>
int main(){
    /*Faça um programa que receba a medida de um ângulo em graus, um número inteiro.
Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes
abaixo:

Ângulo Quadrante
0 |__ 90 1o quadrante
90 |__ 180 2o quadrante
180 |__ 270 3o quadrante
270 |__ 360 4o quadrante
0 __ -90 1o quadrante
-90 |__ -180 2o quadrante
-180 |__ -270 3o quadrante
-270 |__| -360 4o quadrante

Para ângulos maiores que 360 graus, reduza ao intervalo de 0 a 360.*/

    //Declaração de varíaveis
    int angulo;

    //Entrada de dados
    printf("Digite o ângulo com graus: "); // 285
    scanf("%d",&angulo);

    angulo = angulo % 360; // reduzir o intervalo de 0 a 360 graus

    //Condicional e Saída de dados
    if (angulo > 0){
        angulo = angulo + 360; // converter o ãngulo de grau negativo para positivo
    }
    if(angulo > 0 && angulo < 90){  //  285 > 0 e 285 < 90 falso
        printf("1 quadrante\n");
        }else if (angulo > 90 && angulo < 180){ // 285 > 90 e 285 < 180 falso
            printf("2 quadrante\n");
        }else if (angulo > 180 && angulo < 270){ // 285 > 180 e 285 < 270 falso
            printf(" 3 quadrante\n"); 
        }else if( angulo > 270 && angulo < 360){ // 285 > 270 e 285 < 360 verdadeiro
            printf("4 quadrante\n"); // 4 quadrante
        }else{
            printf("O angulo está sobre um eixo\n"); 
        }
    return 0;
}