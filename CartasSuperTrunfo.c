#include <stdio.h>

int main() {
    //vamos criar um codigo para cadastro de duas cartas do jogo super trunfo 
    printf("desafio castas super trunfo- países \n");
    
    //carta 1: colocando as variaveis.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    int população1, população2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

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
    printf("---cadastro da carta 2---\n");
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

    // Exibição dos dados carta 1
    printf("--Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibição dos dados carta 2 
    printf("--Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);




    return 0;
}