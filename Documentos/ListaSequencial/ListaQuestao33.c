#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int ano_nascimento = 0, ano_atual;
    int idade = 0, idade_2028;
    
    //Entrada de dados
    printf("Digite seu ano de nascimento: ");
    scanf("%d",&ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d",&ano_atual);
    
    //Processamento
    idade = ano_atual - ano_nascimento;
    idade_2028 = 2028 - ano_nascimento;
    
    //Saida de dados
    printf("Idade: %d\n",idade);
    printf("Idade em 2028: %d\n",idade_2028);
    
    return 0;
}