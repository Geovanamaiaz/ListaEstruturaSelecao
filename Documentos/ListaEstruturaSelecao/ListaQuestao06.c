#include<stdio.h>
int main(){
    
    //Declaracao de variavel
    float altura = 0;
    float peso_ideal;
    char sexo [20];

    //Entrada de dados
    printf("Digite sua altura: "); // 1.60 
    scanf("%f",&altura);

    printf("Digite seu sexo: "); 
    scanf("%s",&sexo);

    //Condicional
    if(sexo == 'F' || sexo == 'f'){ 
        peso_ideal = (62.1 * altura) - 44.7; //(62.1 * 1.60) - 44.7 =  99,36 - 44.7 = 54,66
    }else{
          peso_ideal = (72.7 * altura) - 58; 
    }

    printf("Peso ideal: %.2f kg\n",peso_ideal); //54,66 kg

    return 0;

}
