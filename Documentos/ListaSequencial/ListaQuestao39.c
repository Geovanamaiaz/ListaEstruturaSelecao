#include<stdio.h>
int main(){
    
    //Declaração de varíaveis
    float total_eleitores = 0, votos_candidato_1 = 0, votos_candidato_2 = 0, votos_nulos = 0;
    float percentual_candidato_1 = 0, percentual_candidato_2 = 0,percentual_nulos = 0;
    
    //Entrada de dados
    printf("Digite o numero total de eleitores: ");
    scanf("%f",&total_eleitores);
    
    printf("Digite o numero de votos do primeiro candidato: ");
    scanf("%f",&votos_candidato_1);
    
    printf("Digite o numero de votos do segundo candidato: ");
    scanf("%f",&votos_candidato_2);
    
    //Processamento
    votos_nulos = total_eleitores - votos_candidato_1 - votos_candidato_2;
    percentual_candidato_1 = votos_candidato_1 / total_eleitores * 100;
    percentual_candidato_2 = votos_candidato_2 / total_eleitores * 100;
    percentual_nulos = (votos_nulos / total_eleitores) * 100;
   
    //Saida de dados
    printf("Percentual de votos do primeiro candidato: %.2f%%\n",percentual_candidato_1);
    printf("Percentual de votos do segundo candidato: %.2f%%\n",percentual_candidato_2);
    printf("Percentual de votos nulos: %.2f%%\n",percentual_nulos);

    return 0;
}