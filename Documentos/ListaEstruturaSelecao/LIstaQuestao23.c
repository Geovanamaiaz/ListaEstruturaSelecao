#include<stdio.h>
int main(){

    /*Faça um programa que receba uma frase, conte e imprima a quantidade de vezes em
que aparece a palavra “aula”.*/

    //Declaração de varíaveis
    char frase[100];
    int quantidade = 0;

    //Entrada de dados
    printf("Digite uma frase: "); // Teve aula de matemática e aula de portuguẽs
    scanf(" %s", frase);

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == 'a' &&
            frase[i + 1] == 'u' &&
            frase[i + 2] == 'l' &&
            frase[i + 3] == 'a') {

            quantidade = quantidade + 1;
        }
    }
    //Saída de dados
    printf("A palavra aula aparece %d vezes\n", quantidade);

    return 0;
}