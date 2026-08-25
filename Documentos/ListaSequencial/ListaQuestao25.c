#include <stdio.h>
#include <math.h>
int main() {
    
    // Declaracao de variaveis
    float p, i, valor_acumulado = 0;
    float n;
    
    // Entrada de dados
    printf("Digite o valor da constante: ");
    scanf("%f", &p);
    
    printf("Digite a taxa de juros: ");
    scanf("%f", &i);
    
    printf("Digite o numero de meses: ");
    scanf("%f", &n);
    
    // Processamento
    valor_acumulado = (p * (pow(1 + i, n) - 1)) / i;
    
    // Saida de dados
    printf("O valor acumulado da aplicacao mensal: %.2f\n", valor_acumulado);

    return 0;
}
