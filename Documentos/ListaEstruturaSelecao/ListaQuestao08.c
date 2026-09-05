#include<stdio.h>
int main(){
    //Declaracao de variaveis

    float n1,n2,n3;
    float media_ponderada = 0;

    //Entrada de dados
    printf("Digite a primeira nota: "); //5
    scanf("%f",&n1);

    printf("Digite a segunda nota: "); //6
    scanf("%f",&n2);

    printf("Digite a terceira nota: "); //8
    scanf("%f",&n3);

    //Processamento e saída de dados
    media_ponderada = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2+3+5); // ((5 * 2)+(6 * 3)+(8 * 5)) / 10 = 68/10 = 6.8
    printf("Media final: %.2f\n",media_ponderada); //6.8

    if(media_ponderada >= 8.0){
        printf("Conceito A\n");
    }else if(media_ponderada >= 7.0){
        printf("Conceito B\n");
    }else if(media_ponderada >= 6.0){ //Sastisfaz a condição: 6.8 menor que 7.0
        printf("Conceito C\n");
    }else if(media_ponderada >= 5.0){
        printf("Conceito D\n");
    }else{
        printf("Conceito E\n");
    }
    return 0;
}