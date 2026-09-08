#include<stdio.h>
int main(){
    /*Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas,
o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule
e imprima o salário a receber do funcionário seguindo as regras abaixo:
• o valor da hora trabalhada é igual a 1/5 do salário mínimo;
• o salário do mês é igual ao número de horas trabalhadas vezes o valor da hora
trabalhada;
• para cada dependente acréscimo de 32 reais;
• para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de
50%;
• o salário bruto é igual ao salário do mês mais os valores dos dependentes mais os
valores das horas extras;
• o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo:

IRRF Salário bruto
isento Inferior a 200
10,00% de 200 até 500
20,00% superior a 500
• o salário líquido é igual ao salário bruto menos IRRF;
• a gratificação segue a próxima tabela:

Salário líquido Gratificação
Até 350 100 reais
Superior a 350 50 reais

• o salário a receber do funcionário é igual ao salário líquido mais a gratificação.*/
 
     //Declaração de varíaveis
     float salario_minimo = 0;
     int horas_trabalhadas = 0;
     int numero_dependentes = 0;
     int horas_extras = 0;

     float valor_hora = 0;
     int salario_mes = 0;
     float valor_dependentes = 0;
     float valor_horas_extras = 0;
     float salario_bruto = 0;
     float irrf = 0;
     float salario_liquido = 0;
     float gratificacao = 0;
     float salario_receber = 0;

     //Entrada de dados
     printf("Digite o valor do saláro minímo: "); //1612
     scanf("%f",&salario_minimo);

     printf("Digite o número de horas trabalhadas: "); //8
     scanf("%d",&horas_trabalhadas);

     printf("Digite o número de dependentes: "); //2
     scanf("%d",&numero_dependentes);

     printf("Digite o número de horas extras trabalhadas: "); // 4
     scanf("%d",&horas_extras);

     //Processamento
     valor_hora = salario_minimo/ 5; // 1612/5 = 322,4
     salario_mes = horas_trabalhadas * valor_hora; //8 x 322,4 = 2.579,2
     valor_dependentes = numero_dependentes * 32; // 2 x 32 = 64
     valor_horas_extras = horas_extras * (valor_hora + (valor_hora * 0.50 )); // 4 x ((322,4 + (322,4 * 0.50)) = 4 x (322,4 + 161,2) = 483,4 x 4 = 1.934,4
     salario_bruto = salario_mes + valor_dependentes + valor_horas_extras; //  2.579,2 + 64 + 1.934,4 = 4.577,4

     //Condicional do irrf 
     if(salario_bruto < 200){ //4.577,4 < 200 falso
        irrf = 0;
     }else if ( salario_bruto <= 500){ // 4.577,4 <=500 falso
        irrf = salario_bruto * 0.10;
     }else{
        irrf = salario_bruto * 0.20; //4.577,4 * 0.20 = 915,48
     }
     salario_liquido = salario_bruto - irrf; // 4.577,4 - 915,48 = 3.661,92

     //Condicional de gratificação
     if(salario_liquido <=350){
        gratificacao = 100;
     }else{
        gratificacao = 50; 
     }
    salario_receber = salario_liquido + gratificacao; //3.661,92 + 50 = 3.711,92

    //Saída de dados
    printf("O salario a receber: %.2f\n",salario_receber); //R$ 3.711,92

    return 0;
}