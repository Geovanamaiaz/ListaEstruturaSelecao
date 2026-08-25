#include<stdio.h>
int main(){
   
    //Declaracao de variaveis
    float a,b,c,d,e,f;
    float valor_x, valor_y;
    //Entrada de dados
    printf("Digite o valor  a: ");
    scanf("%f",&a);
    
    printf("Digite o valor  b: ");
    scanf("%f",&b);
    
    printf("Digite o valor  c: ");
    scanf("%f",&c);
    
    printf("Digite o valor  d: ");
    scanf("%f",&d);
    
    printf("Digite o valor do coeficiente e: ");
    scanf("%f",&e);
    
    printf("Digite o valor do coeficiente f: ");
    scanf("%f",&f);
    
    //Processamento
    valor_x = ( c * e - b * f ) / ( a * e - b * d );
    valor_y = ( a * f - c * d ) / ( a * e - b * d );
    
    //Saida de dados
    printf("O valor de x eh: %.2f\n",valor_x);
    printf("O valor de y eh: %.2f\n",valor_y);

    return 0;
}