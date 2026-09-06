#include<stdio.h>
int main(){
    
    /*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
• A idade dessa pessoa;
•Quantos anos ela terá em 2028.*/

    //Declaracao de variaveis
    int ano_nascimento = 0, ano_atual;
    int idade = 0, idade_2028;
    
    //Entrada de dados
    printf("Digite seu ano de nascimento: "); //2006
    scanf("%d",&ano_nascimento);
    
    printf("Digite o ano atual: ");  //2026
    scanf("%d",&ano_atual);
    
    //Processamento
    idade = ano_atual - ano_nascimento; //2006 - 2026 = 20
    idade_2028 = 2028 - ano_nascimento; // 2028 - 2006 = 22
    
    //Saida de dados
    printf("Idade: %d\n",idade); //20
    printf("Idade em 2028: %d\n",idade_2028); //22
    
    return 0;
}