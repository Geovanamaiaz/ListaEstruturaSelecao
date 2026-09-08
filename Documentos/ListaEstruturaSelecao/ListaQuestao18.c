#include <stdio.h>
int main(){

    /*Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no
número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor
do prêmio é obtido pela consulta na tabela a seguir, em que:
H = (número de horas extras) – (2/3*(número de horas-falta))
H (minutos)Prêmio ($)
> 240500
1800 __| 2400400
1200 __| 1800300
600 __| 1200200
<= 600100
Faça um programa que receba o número de horas extras e o número de
horas- falta em minutos de um funcionário. Imprima o número de horas
extras em horas, o número de horas, o número de horas-falta em horas e o
valor do prêmio.*/

    // Declaração de variáveis
    int qtd_horas_extras = 0;
    int qtd_horas_falta = 0;
    float premio = 0;
    float H;

    // Entrada de dados
    printf("Digite o numero de horas extras: ");
    scanf("%d", &qtd_horas_extras);

    printf("Digite o numero de horas que o funcionario faltou: ");
    scanf("%d", &qtd_horas_falta);

    // Condicional e processamento
    H = (qtd_horas_extras * 60) - (2.0 / 3.0 * qtd_horas_falta);
    if (H > 2400) {
        premio = 500;
    }
    else if (H > 1800) {
        premio = 400;
    }
    else if (H > 1200) {
        premio = 300;
    }
    else if (H > 600) {
        premio = 200;
    }
    else {
        premio = 100;
    }
    // Saída de dados
    printf("\nHoras extras: %d horas", qtd_horas_extras);
    printf("\nHoras-falta: %.2f horas", qtd_horas_falta / 60.0);
    printf("\nH: %.2f minutos", H);
    printf("\nPremio: $ %.2f", premio);

    return 0;
}