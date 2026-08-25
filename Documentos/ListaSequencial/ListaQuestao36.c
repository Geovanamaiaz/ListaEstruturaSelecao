#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int numero_apartamento = 0;
    float diaria, diaria_promocional = 0, total_100 = 0, total_70 = 0, perda = 0;
    
    //Entrada de dados
    printf("Digite o numero do apartamento: "); 
    scanf("%d",&numero_apartamento);
   
    printf("Digite o valor da diaria: ");
    scanf("%f",&diaria);
    
    //Processamento
    diaria_promocional = diaria - (diaria * 0.25); // Calcula o valor promocional com desconto de 25%
    total_100 = (numero_apartamento * diaria_promocional); // Total com 100% de ocupação
    total_70 = (total_100 * 0.70); // Total com 70% de ocupação
    perda = (numero_apartamento * diaria) - total_100; // Valor perdido após a promoção
   
    //Saída de dados
    printf("Diaria promocional: %.2f\n",diaria_promocional);
    printf("Arrecadaçao com 100 %% de ocupacao: R$ %.2f\n",total_100);
    printf("Arrecadacao com 20 %% de ocupacao: R$ %.2f\n",total_70);
    printf("Valor perdido: R$ %.2f\n",perda);
    
    return 0;

}