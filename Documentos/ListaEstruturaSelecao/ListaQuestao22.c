#include <stdio.h>
int main() {

   /*Faça um programa que receba uma frase, conte e imprima o número de palavras desta
frase.*/

    char frase[100];
    int palavras = 0;

    // Entrada de dados
    printf("Digite uma frase: "); 
    scanf(" %s", frase);

    // Processamento
    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            palavras++;
        }
    }
    //Saída de dados
    palavras = palavras + 1; 
    printf("Numero de palavras: %d\n", palavras);

    return 0;
}