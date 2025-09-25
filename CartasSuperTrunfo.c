#include <stdio.h>

int main() {
    //vamos criar um codigo para cadastro de duas cartas do jogo super trunfo 
    printf("desafio castas super trunfo- países \n");
    
    //carta 1: colocando as variaveis.
    int carta1, carta2;
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome_da_cidade1[50], nome_da_cidade2[50];
    unsigned long int população1, população2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float PIB_per_capita1, PIB_per_capita2;
    float super_poder1, super_poder2;
    

   //imprimindo as variaveis carta 1:
    printf("---cadastro da carta 1--- \n");
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado1); // espaço antes do %C para não ler o enter.

    printf("digite o codigo ex:A01 : \n");
    scanf("%3s", codigo1);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("digite o numero da população: \n");
    scanf("%lu", &população1);

    printf("digite a area em km²: \n");
    scanf("%f", &area1);

    printf("digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos1);

    //calculando a densidade e o pib percapita da carta 1
    densidade1 = população1 / area1;
    PIB_per_capita1 = PIB1 * 1000000000 / população1;
    // calculando super poder 
    super_poder1 = (float)população1 + area1 + PIB1 + (float)pontos_turisticos1 + PIB_per_capita1 + (1 / densidade1);


    //imprimindo variaveis carta 2:
    printf("---cadastro da carta 2---\n");
    printf("digite o estado (A-H): \n");
    scanf(" %c", &estado2); // espaço antes do %C para não ler o enter.

    printf("digite o codigo ex:A01 : \n");
    scanf("%3s", codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("digite o numero da população: \n");
    scanf("%lu", &população2);

    printf("digite a area em km²: \n");
    scanf("%f", &area2);

    printf("digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("digite a quantidade de pontos turisticos: \n ");
    scanf("%d", &pontos_turisticos2);

    //calculando a densidade e o pib percapita da carta 2
    densidade2 = população2 / area2;
    PIB_per_capita2 = PIB2 * 1000000000 / população2;
    // calculando super poder 
    super_poder2 = (float)população2 + area2 + PIB2 + (float)pontos_turisticos2 + PIB_per_capita2 + (1 / densidade2);


    // Exibição dos dados carta 1
    printf("--Carta 1--\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %lu\n", população1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f Reais\n", PIB_per_capita1);
    printf("Super poder:%.2f\n",super_poder1);

    // Exibição dos dados carta 2 
    printf("--Carta 2--\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", população2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f Reais\n", PIB_per_capita2);
    printf("Super poder:%.2f\n", super_poder2);

   //comparando as variaveis

    char *vencedor[50] = {"carta 2 venceu ", "carta 1 venceu"};

    int reslt_população = população1 > população2;

    int reslt_area = area1 > area2;

    int reslt_pib = PIB1 > PIB2;

    int reslt_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;

    int reslt_densidade = densidade1 < densidade2; // Menor vence

    int reslt_pibpercapita = PIB_per_capita1 > PIB_per_capita2;

    int reslt_super_poder = super_poder1 > super_poder2;



    // comparando as cartas

    printf("*** comparando as cartas *** \n");

    printf("População: %s (%d)\n)", vencedor[reslt_população], reslt_população);

    printf("Area: %s (%d)\n)", vencedor[reslt_area], reslt_area);

    printf("Pib: %s (%d)\n)", vencedor[reslt_pib], reslt_pib);

    printf("pontos turisticos: %s (%d)\n)", vencedor[reslt_pontos_turisticos], reslt_pontos_turisticos);

    printf("Densidade: %s (%d)\n)", vencedor[reslt_densidade], reslt_densidade);

    printf("Pib percapita: %s (%d)\n)", vencedor[reslt_pibpercapita], reslt_pibpercapita);

    printf("super poder: %s (%d)\n)", vencedor[reslt_super_poder], reslt_super_poder);


    return 0;

}