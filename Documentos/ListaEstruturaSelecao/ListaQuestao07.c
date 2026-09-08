#include<stdio.h>
int main(){
    
    /*Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
categoria idade
infantil A 5 – 7 anos
infantil B 8 – 10 anos
juvenil A 11 – 13 anos
juvenil B 14 – 17 anos
sênior maiores de 18 anos*/

    //Declaracao de variaveis
    int idade  = 0;

    //Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    //Condicional
    if(idade >=5 && idade<=7){
        printf("Infantil A\n");
    }else if(idade >=8 && idade<=10){
        printf("Infantil B\n");
    }else if(idade >=11 && idade<=13){
        printf("Juvenil A\n");
    }else if(idade >=14 && idade<=17){
        printf("Juvenil B\n");
    }else{
       printf("Senior\n"); 
    }
    
    return 0;
}
