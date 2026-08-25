#include<stdio.h>
int main(){
    
   //Declaracao de variaveis
   char nome1[50], nome2[50], nome3[50];
    
   //Entrada de dados
   printf("Digite o primeiro nome: ");
   scanf("%s",nome1);
    
   printf("Digite o segundo nome: ");
   scanf("%s",nome2);
   
   printf("Digite o terceiro nome: ");
   scanf("%s",nome3);
    
   //Saida de dados
   printf("O primeiro e ultimo nomes digitados sao: %s e %s\n",nome1,nome3);
   printf("O segundo nome digitado foi: %s\n",nome2);
   
   return 0;
}