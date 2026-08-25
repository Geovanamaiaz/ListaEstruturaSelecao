#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int ano_nascimento, ano_atual, idade, idade_semanas;
    
    //Entrada de dados
    printf("Digite o ano de nascimento: ");
    scanf("%d",&ano_nascimento);
    
    printf("Digite o ano atual: ");
    scanf("%d",&ano_atual);
   
    //Processamento
    idade = ano_atual - ano_nascimento;
    idade_semanas = idade * 52;   //365 dias * 7 dias da semana = 52 semanas
    
    //Saida de dados
    printf("A idade da pessoa em anos: %d\n",idade);
    printf("A idade da pessoa em semanas: %d\n",idade_semanas);

    return 0;
}