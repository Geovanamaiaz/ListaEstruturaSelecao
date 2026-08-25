#include<stdio.h>
int main(){
   
    //Declaracao de variaveis
    float area = 0, base = 0, altura = 0,lado = 0,raio = 0, base_maior = 0;
    float base_menor = 0,diagonal_maior = 0 ,diagonal_menor = 0;
    
    //Entrada de dados
    printf("Digite a base do triangulo: ");
    scanf("%f",&base);
    printf("Digite a altura do triangulo: ");
    scanf("%f",&altura);
    
    printf("Digite o lado do quadrado: ");
    scanf("%f",&lado);
    
    printf("Digite o raio do circulo: ");
    scanf("%f",&raio);
    
    printf("Digite a base maior do trapezio: ");
    scanf("%f",&base_maior);
    
    printf("Digite a base menor do trapezio: ");
    scanf("%f",&base_menor);
    
    printf("Digite a diagonal maior do losango: ");
    scanf("%f",&diagonal_maior);
    
    printf("Digite a diagonal menor do losango: ");
    scanf("%f",&diagonal_menor);
    
    //Processamento
    area = (base * altura)/2;
    
    //Saida de dados
    printf("A area do triangulo: %.2f\n",area);
    
    //Processamento
    area = lado * lado;
   
    //Saida de dados
    printf("A area do quadrado: %.2f\n",area);
    
    //Processamento
    area = 3.14 * (raio * raio);
    
    //Saida de dados
    printf("A area do circulo: %.2f\n",area);
    
    //Processamento
    area = ((base_maior + base_menor) * altura)/2;
    
    //Saida de dados
    printf("A area do trapezio: %.2f\n",area);
    
    //Processamento
    area = (diagonal_maior * diagonal_menor)/2;
    
    //Saida de dados
    printf("A area do losango: %.2f\n",area);
   
    return 0;
}
