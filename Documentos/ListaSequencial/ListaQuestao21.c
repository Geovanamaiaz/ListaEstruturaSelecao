#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    float comprimento, = 0, largura = 0, profundidade = 0;
    float valor_construcao = 0;
    
    //Entrada de dados
    printf("Digite o comprimento da piscina: ");
    scanf("%f",&comprimento);
    
    printf("Digite a largura da piscina: ");
    scanf("%f",&largura);
    
    printf("Digite a profundidade da piscina: ");
    scanf("%f",&profundidade);
    
    //Processamento
    valor_construcao = comprimento * largura * profundidade * 45;
    
    //Saida de dados
    printf("O valor da construcao da piscina: %.2f\n",valor_construcao);
    
    return 0;
}