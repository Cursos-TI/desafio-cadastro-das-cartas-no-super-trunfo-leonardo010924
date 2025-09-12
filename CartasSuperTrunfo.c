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
    float densidade_populacional1;
    float PIB_per_capita1;

    //carta 2: colocando as variaveis.
    char estado2;
    char codigo2[4];
    char nome_da_cidade2[50];
    int população2;
    float area2;
    float PIB2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float PIB_per_capita2;

    //imprimindo as variaveis carta 1:
    printf("cadastro da carta 1: \n");
    
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado1); // espaço antes do %C para não ler o enter.
    printf("Estado: %c \n", estado1);

    printf("digite o codigo ex:A01 : \n");
    scanf("%s", codigo1);
    printf("Código: %s \n", codigo1);
    
    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);
    printf("Nome da cidade: %s \n", nome_da_cidade1);

    printf("digite o numero da população: \n");
    scanf("%d", &população1);
    printf("População: %d \n", população1);

    printf("digite a area em km²: \n");
    scanf("%f", &area1);
    printf("Área: %.2f km²\n", area1);

    printf("digite o PIB: \n");
scanf("%f", &PIB1);
    printf("PIB: %.2f \n", PIB1);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos1);
    printf("Pontos turisticos: %d \n", pontos_turisticos1);

    densidade_populacional1 = população1 / area1;
    printf("densidade populacional: %.2f \n", densidade_populacional1);

    PIB_per_capita1 = PIB1 / população1;
    printf("PIB per capita: %.2f \n", PIB_per_capita1);

     //imprimindo variaveis carta 2:
    printf("cadastro da carta 2: \n");
    
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado2); // espaço antes do %C para não ler o enter.
    printf("Estado: %c \n", estado2);

    printf("digite o codigo ex:A01 : \n");
    scanf("%s", codigo2);
    printf("Código: %s \n", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);
    printf("Nome da cidade: %s \n", nome_da_cidade2);

    printf("digite o numero da população: \n");
    scanf("%d", &população2);
    printf("População: %d \n", população2);

    printf("digite a area em km²: \n");
    scanf("%f", &area2);
    printf("Área: %.2f km²\n", area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);
    printf("PIB: %.2f \n", PIB2);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos2);
    printf("Pontos turisticos: %d \n", pontos_turisticos2);

    densidade_populacional2 = população2 / area2;
    printf("densidade populacional: %.2f \n", densidade_populacional2); 

    PIB_per_capita2 = PIB2 / população2;
    printf("PIB per capita: %.2f \n", PIB_per_capita2);

    return 0;
}