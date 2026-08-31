#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float n1,n2,n3;
    float media_ponderada = 0;

    //Entrada de dados
    printf("Digite a primeira nota: ");  // 5
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");  // 8
    scanf("%f",&n2);

    printf("Digite a terceira nota: ");  // 9
    scanf("%f",&n3);

    //Processamento e saída de dados
    media_ponderada = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / (2+3+5);  // (( 5 * 2) + ( 8 * 3) + ( 9 * 5)) / (2+3+5) = 10 + 24 + 45 / 10 = 79/10 = 7.9
    printf("Media final: %.2f\n",media_ponderada);

    if(media_ponderada >= 8.0){  // 7.9 < 8.0
        printf("Conceito A\n");
    }else if(media_ponderada >= 7.0){  // 7.9 < 7.0
        printf("Conceito B\n");
    }else if(media_ponderada >= 6.0){  // 7.9 < 6.0
        printf("Conceito C\n");
    }else if(media_ponderada >= 5.0){ // 7.9 < 5.0
        printf("Conceito D\n");
    }else{
        printf("Conceito E\n");
    }
    return 0;
}
