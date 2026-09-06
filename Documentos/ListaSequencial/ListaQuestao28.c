#include<stdio.h>
int main(){
    
    /*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de
conversão é: F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.*/

    //Declaracao de variaveis
    float temperatura_celsius = 0, temperatura_fahrenheit = 0;
    
    //Entradada de dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&temperatura_celsius);
    
    //Processamento
    temperatura_fahrenheit = ( 9 * temperatura_celsius + 160)/ 5;
    
    //Saida de dados
    printf("A temperatura em Fahrenheit eh: %.2f\n",temperatura_fahrenheit);
    
    return 0;
}