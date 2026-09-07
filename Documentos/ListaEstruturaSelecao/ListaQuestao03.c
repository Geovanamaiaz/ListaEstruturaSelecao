#include<stdio.h>
int main(){

    //Declaração de variaveis
    char senha[6];

    //Entrada de dados
    printf("Digite sua senha: "); //ASDFG
    scanf("%s", &senha);

    //Condicional e saida de dados
    if(senha[0] == 'A' && senha[1] == 'S' && senha[2] == 'D' && senha[3] == 'F' && senha[4] == 'G' && senha[5] == '\0'){ //ASDFG
        printf("Permissao de acesso\n"); // Permissão aceita
    }else{
        printf("Acesso negado\n");
    }

    return 0;
}
