#include<stdio.h>
int main(){
    
    //Declaracao de variaveis
    int a, b, c, temp;
    
    //Entrada de dados
    printf("Digite o valor a: "); //3
    scanf("%d",&a);
    
    printf("Digite o valor b: "); //2
    scanf("%d",&b);
    
    printf("Digite o valor c: "); //1
    scanf("%d",&c);
    
    //Processamento
    temp = a; 
    a = b;  
    b = c;   
    c = temp;
    
    //Saida de dados
    printf("O valor do primeiro numero: %d\n", a);
    printf("O valor do segundo numero: %d\n", b);
    printf("O valor do terceiro numero: %d\n", c);

    return 0;
}