#include<stdio.h>
int main(){
    /*Faça um programa que receba uma frase, conte e imprima o número de vogais desta
frase.*/
    
    //Declaração de varíaveis
    char frase[100];
    int vogais = 0;

    //Entrada de dados
    printf("Digite uma frase: "); //Geovana
    scanf("%s",&frase);

    for(int i = 0; frase [i]!= '\0'; i++){ // começa do zero e vai até o final da palavra, avançando uma posição por vez
        if(frase[i] == 'a' || frase[i] =='e'|| frase[i]== 'i' || frase[i] == 'o' || frase[i] == 'u'){ // E O A A
            vogais = vogais + 1; //Contador aumentando mais 1 a cada verificação
        }
    }
    //Saída de dados
    printf("Numero de vogais: %d\n",vogais); // 4 
    
    return 0;
}