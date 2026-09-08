#include<stdio.h>
int main(){
    /*Faça um programa que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo
a tabela:

Código Cargo Percentual
1 Escriturário 50,00%
2 Secretário 35,00%
3 Caixa 20,00%
4 Gerente 10,00%
5 Diretor Não tem aumento*/

   //Declaração de varíaveis
   int codigo;

   //Entrada de dados
   printf("Digite o código do produto (1 a 5): "); // 4
   scanf("%d",&codigo);

   //Processamento
   switch(codigo){
    case 1:
       printf("Escrituario -  50 %% de aumento\n");
       break;
   
    case 2:
        printf("Secretario - 35 %% de aumento\n");
        break;

    case 3:
        printf("Caixa - 20 %% de aumento\n");
        break;

    case 4:
        printf("Gerente - 10%% de aumento\n"); //Caso que sastifaz a varíavel 4
        break;

    case 5:
        printf("Diretor nao tem aumento\n");
        break;

    default:
    printf("Codigo invalido\n");

   }
   return 0;   
}