#include<stdio.h>
int main(){
    //Declaração de varíaveis
    int codigo;
    float preco;

    //Entrada de dados
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    //processamento
    printf("\nPreco: R$ %.2f\n", preco);
    printf("Procedência: ");

    switch(codigo){
        case 1:
            printf("Sul\n");
            break;
        case 2:
            printf("Norte\n");
            break;
        case 3:
            printf("Leste\n");
            break;
        case 4:
            printf("Oeste\n");
            break;
        case 5:
        case 6:
            printf("Nordeste\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Sudeste\n");
            break;        
        default:
            if(codigo >= 10 && codigo <= 20){
                printf("Centro-Oeste\n");
            }else if(codigo >= 25 && codigo <= 30){
                printf("Nordeste\n");                  
            }else{
                printf("Importado\n");
            }

    }

    return 0;
}
