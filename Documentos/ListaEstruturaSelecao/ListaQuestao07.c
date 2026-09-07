#include<stdio.h>
int main(){

    //Declaracao de variaveis
<<<<<<< HEAD
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
=======
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
>>>>>>> bc08b6ba2b862621f7fa4670ae55a2dca2b8789b
       printf("Senior\n"); 
    }
    
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> bc08b6ba2b862621f7fa4670ae55a2dca2b8789b
