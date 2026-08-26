#include<stdio.h>
int main(){

    //Declaracao de variaveis
    int idade;

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
