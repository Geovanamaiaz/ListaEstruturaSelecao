#include<stdio.h>
int main(){
    
    /*Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/

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
