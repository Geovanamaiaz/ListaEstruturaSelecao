#include<stdio.h>
#include<math.h> 
int main(){
    
    //Declaracao de variaveis
    float base = 0, expoente = 0;
    float resultado = 0;
    
    //Entrada de dados
    printf("Digite a base: ");
    scanf("%f",&base);
    
    printf("Digite o expoente: ");
    scanf("%f",&expoente);
   
    //Processamento
    resultado = pow(base,expoente);
    
    //Saida de dados
    printf("O resultado de %.2f elevado a %.2f: %.2f\n", base, expoente, resultado);
    
    return 0;
}