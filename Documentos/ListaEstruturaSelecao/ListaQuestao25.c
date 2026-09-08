#include<stdio.h>
int main(){

    /*Escreva um programa que calcule o que deve ser pago por um produto, considerando o
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela
a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado:
Código Condição de pagamento
1 Á vista em dinheiro ou cheque, recebe 10% de desconto.
2 À vista no cartão de crédito, recebe 5% de desconto.
3 Em 2 vezes, preço normal de etiqueta sem juros.
4 Em 3 vezes, preço normal de etiqueta mais juros de 10%.*/

   //Declaração de varíaveis
    float preco;
    float valor_pagar;
    int codigo;

    // Entrada de dados
    printf("Digite o preco do produto: "); //1500
    scanf("%f", &preco);

    printf("Digite a condicao de pagamento: "); //1
    scanf("%d", &codigo);

    // Processamento
    switch (codigo) {
        case 1:
            valor_pagar = preco - (preco * 0.10); // 1500 - (1500 * 0.10) = 1500 - 150 = 1350
            break;

        case 2:
            valor_pagar = preco - (preco * 0.05);
            break;

        case 3:
            valor_pagar = preco;
            break;

        case 4:
            valor_pagar = preco + (preco * 0.10);
            break;

        default:
            printf("Codigo invalido!\n");
    }
    // Saída de dados
    printf("Valor a pagar: R$ %.2f\n", valor_pagar); //1350

    return 0;
}