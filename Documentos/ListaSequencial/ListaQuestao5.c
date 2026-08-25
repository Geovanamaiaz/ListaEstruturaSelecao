#include<stdio.h>
int main(){

    //Declaração de varíaveis
    float nota1 = 0, nota2 = 0;
    float peso1 = 0, peso2 = 0;
    float soma = 0, media_ponderada = 0;
    
    //Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite o peso da primeira nota: ");
    scanf("%f",&peso1);

    printf("Digite a nota 2: ");
    scanf("%f",&nota2);
    
    printf("Digite o peso da segunda nota: ");
    scanf("%f",&peso2);
    
    //Processamento 
    soma = (nota1 * peso1) + (nota2 * peso2);
    media_ponderada = soma / (peso1  + peso2);
    
    //Saida de dados
    printf("A media ponderada das 2 notas: %.2f\n",media_ponderada);
    
    return 0;
}