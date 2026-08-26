#include<stdio.h>
int main(){

    //Declaração de varíaveis
    float n1, n2, n3, n4;
    float media_aritmetica = 0;
    
    //Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    printf("Digite a quarta nota: ");
    scanf("%f",&n4);

    //Processamento
    media_aritmetica = (n1 + n2 + n3 + n4) / 4;
    
    //Saída de dados
    printf("Media aritmetica: %.2f\n",media_aritmetica);
    
    //Condicional
    if(media_aritmetica >= 7.0){ 
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n");
    }

    return 0;
}