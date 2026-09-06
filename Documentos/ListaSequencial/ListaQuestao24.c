#include<stdio.h>
int main(){
    
    /*No momento, por conta da administração pública péssima e da corrupção em todos os setores
estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o
desconto foi de 9%.*/

    //Declaracao de variaveis
    float valor_produto, desconto;
    
    //Entrada de dados 
    printf("Digite o valor do produto: ");
    scanf("%f",&valor_produto);
    
    //Processamento
    desconto = valor_produto - (valor_produto * 9/100);
    
    //Saida de dados
    printf("O valor do desconto é: %.2f\n", desconto);
    
    return 0;
}