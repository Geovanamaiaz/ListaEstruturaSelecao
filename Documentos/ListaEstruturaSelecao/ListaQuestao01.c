#include<stdio.h>
int main(){

    //Declaração de varíaveis
    float n1, n2, n3, n4;
    float media_aritmetica = 0;
    
    //Entrada de dados
    printf("Digite a primeira nota: "); //5
    scanf("%f",&n1);

    printf("Digite a segunda nota: "); //6
    scanf("%f",&n2);

    printf("Digite a terceira nota: "); //7
    scanf("%f",&n3);

    printf("Digite a quarta nota: "); //8
    scanf("%f",&n4);

    //Processamento
    media_aritmetica = (n1 + n2 + n3 + n4) / 4; //(5+6+7+8)/4 = 26/4 = 6,5
    
    //Saída de dados
    printf("Media aritmetica: %.2f\n",media_aritmetica); //6,5
    
    //Condicional
    if(media_aritmetica >= 7.0){  //6,5 >=7,0 = Falso
        printf("Aprovado\n");
    }else{
        printf("Reprovado\n"); // Reprovado
    }

    return 0;
}
