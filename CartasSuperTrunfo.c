#include <stdio.h>

int main() {
    //vamos criar um codigo para cadastro de duas cartas do jogo super trunfo 
    printf("desafio castas super trunfo- países \n");
    
    //carta 1: colocando as variaveis.
    char estado1;
    char codigo1[4];
    char nome_da_cidade1[50];
    int população1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    //carta 2: colocando as variaveis.
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[50];
    int população2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    //imprimindo as variaveis carta 1:
    printf("cadastro da carta 1: \n");
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado1); // espaço antes do %C para não ler o enter.

    printf("digite o codigo ex:A01 : \n");
    scanf("%s", codigo1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("digite o numero da população: \n");
    scanf("%d", &população1);

    printf("digite a area em km²: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos1);

     //imprimindo variaveis carta 2:
    printf("cadastro da carta 2: \n");
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado2); // espaço antes do %C para não ler o enter.

    printf("digite o codigo ex:A01 : \n");
    scanf("%s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("digite o numero da população: \n");
    scanf("%d", &população2);

    printf("digite a area em km²: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos2);


    return 0;
}
