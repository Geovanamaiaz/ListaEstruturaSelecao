#include<stdio.h>
int main(){
    /*Uma companhia de seguros tem três categorias de seguros baseadas na idade e na
ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três
grupos de risco. A tabela a seguir fornece as categorias em função da caixa de idade e do
grupo de risco:

    Grupo de risco
idade Baixo Médio Alto
   18 a 24 7 8 9
   25 a 40 4 5 6
   41 a 70 1 2 3
Faça um programa que receba a idade e o grupo de risco (b, m ou a) e
determine e imprima o código do seguro.*/
 
    //Declaração de varíaveis
    int idade = 0;
    char risco;

    //Entrada de dados
    printf("Digite sua idade: "); //20
    scanf("%d",&idade);

    printf("Digite o grupo de risco (b,m ou a):"); //a
    scanf("% c",&risco);
    
    //Condicional e Processamento
    if(idade >= 18 && idade <=24){ // 20>=18 e 20<=24 verdadeiro
    
        switch (risco){
            case 'b':
            printf("Codigo do seguro: 7\n");
            break;
        
            case 'm':
            printf("Codigo do seguro: 8\n");
            break;

            case 'a':
            printf("Codigo do seguro: 9\n"); //9
            break;

            default:
            printf("Grupo de risco inválido.\n");
        }

    }else if( idade >= 25 && idade <= 40){

         switch(risco){
            case 'b':
            printf("Codigo do seguro: 4\n");
            break;

            case 'm':
            printf("Codigo do seguro: 5\n");
            break;

            case 'a':
            printf("Codigo do seguro: 6\n");
            break;

            default:
            printf("Grupo de risco inválido.\n");
        }

    }else if(idade >= 41 && idade <=70){
        
        switch(risco){

            case 'b':
            printf("Codigo do seguro: 1\n");
            break;

            case 'm':
            printf("Codigo do seguro: 1\n");
            break;

            case 'a':
            printf("Codigo do seguro: 3\n");
            break;

            default:
            printf("Grupo de risco inválido\n");
        }
    }else{
        printf("Idade inválida! O seguro só pode ser adquirido entre 18 a 70 anos.\n");
    }
  return 0;
}