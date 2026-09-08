#include<stdio.h>
#include<math.h>
int main(){

    //Faça um programa para resolver equações do 2o grau.

    //Declaração de varíaveis
    float a,b,c;
    float delta,x1,x2;

    //Entrada de dados
    printf("Digite o valor de a: "); //3
    scanf("%f",&a);

    printf("Digite o valor de b: "); //4
    scanf("%f",&b);

    printf("Digite o valor de c: "); //5
    scanf("%f",&c);

    //Processamento
    delta = (b * b) - (4 * a * c); //(4 x 4) - ( 4 x 3 x 5) = 44

    //Condicional
    if(delta < 0){ 
    printf("Nao existem raizes reais\n"); 
}
    if(delta == 0) {
    x1 = -b / (2 * a);
    printf("x = %.2f\n", x1);
}
    if (delta > 0) {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    
    //Saída de dados
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
  }
    return 0;
}