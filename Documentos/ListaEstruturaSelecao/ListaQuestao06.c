#include<stdio.h>
int main(){
    
    //Declaracao de variavel
    float altura = 0;
    float peso_ideal;
    char sexo [20];

    //Entrada de dados
    printf("Digite sua altura: ");
    scanf("%f",&altura);

    printf("Digite seu sexo: ");
    scanf("%s",&sexo);

    //Condicional
    if(sexo == 'F' || sexo == 'f'){
        peso_ideal = (62.1 * altura) - 44.7;
    }else{
          peso_ideal = (72.7 * altura) - 58;
    }

    printf("Peso ideal: %.2f kg\n",peso_ideal);

    return 0;

}