#include<stdio.h>
int main(){
    
    //Declaração de varíaveis
    float nota1, nota2, nota3;
    float soma = 0, media_aritmetica = 0;
    
    //Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
    
    //Processamento
    soma = nota1 + nota2 + nota3;
    media_aritmetica = soma/3;
    
    //Saída de dados
    printf("A media aritmetica das 3 notas: %.2f\n",media_aritmetica);
    
    return 0;
}