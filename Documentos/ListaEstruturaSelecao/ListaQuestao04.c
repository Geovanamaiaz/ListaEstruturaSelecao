#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int idade = 0;

    //Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    //Condicional e saida de dados
    if(idade >= 18){
        printf("Maior de idade\n");
    }else{
        printf("Menor de idade\n");
    }
    
    return 0;
}