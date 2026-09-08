#include<stdio.h>
int main(){
    /*Construa um programa que seja capaz de concluir qual dentre os seguintes animais foi
escolhido, através de perguntas e respostas. Animais possíveis: leão, cavalo, homem,
macaco, morcego, baleia, avestruz, pinguim, pato, águia, tartaruga, crocodilo e cobra.
Exemplo:
é mamífero? Sim
é quadrúpede? Sim
é carnívoro? Não
é herbívoro? Sim
então o animal escolhido foi o cavalo
utilize as seguintes classificações:
Carnívoro Leão
Quadrúpede
Herbívoro Cavalo
Mamíferos Onívoro Homem
Bípede
Frutíferos Macaco
Voadores Morcego
Aquáticos Baleia
Tropical Avestruz
Não-voadoras
Polar Pinguim
Aves
Nadadoras Pato
De rapina Águia
Com casco Tartaruga
Répteis Carnívoro Crocodilo
Sem patas cobra*/

    //Declaração de varíaveis
    char resposta;

    //Condicional e saída de dados
    printf("E mamifero? (s/n): "); //não
    scanf(" %c", &resposta);

    if (resposta == 's') {

        printf("E quadrupede? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 's') {

            printf("E carnivoro? (s/n): ");
            scanf(" %c", &resposta);

            if (resposta == 's') {
                printf("Entao o animal escolhido foi o leao.\n");
            } else {
                printf("Entao o animal escolhido foi o cavalo.\n");
            }

        } else {

            printf("E onivoro? (s/n): ");
            scanf(" %c", &resposta);

            if (resposta == 's') {
                printf("Entao o animal escolhido foi o homem.\n");
            } else {
                printf("E frutifero? (s/n): ");
                scanf(" %c", &resposta);

                if (resposta == 's') {
                    printf("Entao o animal escolhido foi o macaco.\n");
                }
            }
        }

    } else {

        printf("E voador? (s/n): "); //não
        scanf(" %c", &resposta);

        if (resposta == 's') {

            printf("E aquatico? (s/n): ");
            scanf(" %c", &resposta);

            if (resposta == 's') {
                printf("Entao o animal escolhido foi a baleia.\n");
            } else {
                printf("Entao o animal escolhido foi o morcego.\n");
            }

        } else {

            printf("E uma ave? (s/n): ");  //não
            scanf(" %c", &resposta);

            if (resposta == 's') {

                printf("E nadadora? (s/n): ");
                scanf(" %c", &resposta);

                if (resposta == 's') {
                    printf("Entao o animal escolhido foi o pato.\n");
                } else {
                    printf("E de rapina? (s/n): ");
                    scanf(" %c", &resposta);

                    if (resposta == 's') {
                        printf("Entao o animal escolhido foi a aguia.\n");
                    } else {
                        printf("E polar? (s/n): ");
                        scanf(" %c", &resposta);

                        if (resposta == 's') {
                            printf("Entao o animal escolhido foi o pinguim.\n");
                        } else {
                            printf("Entao o animal escolhido foi a avestruz.\n");
                        }
                    }
                }

            } else {

                printf("E com casco? (s/n): ");  //não
                scanf(" %c", &resposta);

                if (resposta == 's') {
                    printf("Entao o animal escolhido foi a tartaruga.\n");
                } else {

                    printf("E carnivoro? (s/n): ");  //sim
                    scanf(" %c", &resposta);

                    if (resposta == 's') {
                        printf("Entao o animal escolhido foi o crocodilo.\n"); //crocodilo
                    } else {
                        printf("Entao o animal escolhido foi a cobra.\n");
                    }
                }
            }
        }
    }

    return 0;
}