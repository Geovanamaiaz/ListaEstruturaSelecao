#include<stdio.h>
int main(){

    //Declaracao de variaveis
    int idade;

    //Entrada de dados
    printf("Digite sua idade: "); //20
    scanf("%d",&idade);

    //Condicional
    if(idade >=5 && idade<=7){ //20 >=5 Falso e 20 <=7 Falso
        printf("Infantil A\n");
    }else if(idade >=8 && idade<=10){  // 20>=8 Falso e 20<=10 Falso
        printf("Infantil B\n");
    }else if(idade >=11 && idade<=13){ // 20>=11 Falso e 20<=13 Falso
        printf("Juvenil A\n");
    }else if(idade >=14 && idade<=17){ //20>=14 Falso e 20<=17 Falso
        printf("Juvenil B\n");
    }else{ //20 Verdadeiro
       printf("Senior\n"); 
    }
    
    return 0;
}
