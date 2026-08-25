#include<stdio.h>
#include<math.h>
int main(){
    //Declaracao de variaveis
    float numero;
    float raiz_quadrada = 0;
    //Entrada de dados
    printf("Digite um numero: ");
    scanf("%f",&numero);
    //Processamento
    raiz_quadrada = sqrt(numero);
    //Saida de dados
    printf("A raiz quadrada de %.2f: %.2f\n", numero, raiz_quadrada);
    
    return 0;
}