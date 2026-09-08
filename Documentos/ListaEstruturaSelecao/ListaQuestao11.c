#include<stdio.h>
int main(){
   // Faça um programa que receba dois números e imprima o menor dos dois.

   //Declaração de varíaveis
   int n1,n2;

   //Entrada de dados
   printf("Digite o primeiro número: "); // 4
   scanf("%d", &n1);
   printf("Digite o segundo número: "); // 3
   scanf("%d", &n2);

   //Condicional e saída de dados
   if(n1 < n2){
       printf("O menor número é: %d\n", n1); //4 < 3 é falso
   }else{
       printf("O menor número é: %d\n", n2); // 3 < 4 é verdadeiro
   }
   return 0;
}