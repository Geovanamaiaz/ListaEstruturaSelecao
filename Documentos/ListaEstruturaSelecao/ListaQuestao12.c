
#include<stdio.h>
int main(){
    /*Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média Mensagem
0.0 |__ 5.0 reprovado
5.0 |__ 7.0 exame
7.0 |__| 10.0 aprovado*/

    //Declaração de variaveis
    float n1,n2,n3;
    float media_aritmetica = 0;

    //Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    //Cálculo da média aritmética
    media_aritmetica = (n1 + n2 + n3) / 3;

    //Condicional e saída de dados
    if(media_aritmetica >= 0 && media_aritmetica < 5){
        printf("Média: %.2f - Reprovado\n", media_aritmetica);
    }else if(media_aritmetica >= 5 && media_aritmetica < 7){
        printf("Média: %.2f - Exame\n", media_aritmetica);
    }else{
        printf("Média: %.2f - Aprovado\n", media_aritmetica);
    }

    return 0;
}