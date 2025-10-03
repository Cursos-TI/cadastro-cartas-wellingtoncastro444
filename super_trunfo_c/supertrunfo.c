#include <stdio.h>

int main(){

//declaração de variáveis da Carta A

    printf("CARTA A\n");
    char estado_A;
    char nome_da_cidade_A[20];
    char codigo_A[5];
    int populacao_A;
    float pib1_A;
    int pontos_turisticos_A;
    float densidade_populacional_A;
    float pib_per_capita_A;
    float area_km2_A;

    printf("estado A:\n" );
    scanf(" %c", &estado_A);

    printf("nome da cidade A:\n" );
    scanf("%s", nome_da_cidade_A);
    
    printf("codigo A:\n");
    scanf("%s", codigo_A);

    printf("população A:\n");
    scanf("%d", &populacao_A);

    printf("pib A (em bilhões de reais):\n");
    scanf("%f", &pib1_A);

    printf("pontos turisticos A:\n");
    scanf("%d", &pontos_turisticos_A);


    printf("Àrea km2:\n");
    scanf("%f", &area_km2_A);

    printf("\n");

    //cálculo da densidade populacioanl: população_A / area km2_A
    //conversão explícita (float) necessária para garantir casas decimais

    densidade_populacional_A = (float) populacao_A / area_km2_A;
    pib_per_capita_A = (pib1_A * 1000000000.0) / populacao_A;

    printf("\n");

    //declaração de variáveis da carta B

     printf("CARTA B\n");
    char estado_B;
    char nome_da_cidade_B[20];
    char codigo_B[5];
    int populacao_B;
    float pib1_B;
    int pontos_turisticos_B;
    float densidade_populacional_B;
    float pib_per_capita_B;
    float area_km2_B;

    
    printf("estado B:\n" );
    scanf(" %c", &estado_B);

    printf("nome da cidade B:\n" );
    scanf("%s", nome_da_cidade_B);
    
    printf("codigo B\n");
    scanf("%s", codigo_B);

    printf("população B\n");
    scanf("%d", &populacao_B);

    printf("pib B (em bilhões de reais):\n");
    scanf("%f", &pib1_B);

    printf("pontos turisticosB:\n");
    scanf("%d", &pontos_turisticos_B);

    printf("Àrea km2 B:\n");
    scanf("%f", &area_km2_B);

    printf("\n");

    //cálculo da densidade populacioanl: população_B / area km2_B
    //conversão explícita (float) necessária para garantir casas decimais
    
    densidade_populacional_B= (float) populacao_B/ area_km2_B;
    pib_per_capita_B = (pib1_B * 1000000000.0) / populacao_B;


    printf("Estado: %c\n", estado_A);
    printf("Cidade: %s\n", nome_da_cidade_A);
    printf("Código: %s\n", codigo_A);
    printf("População: %d habitantes\n", populacao_A);
    printf("Área: %.2f km²\n", area_km2_A);
    printf("PIB: %.2f bilhões de reais\n", pib1_A);
    printf("Pontos turísticos: %d\n", pontos_turisticos_A);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_A);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_A);

    printf("\n");

    printf("Estado: %c\n", estado_B);
    printf("Cidade: %s\n", nome_da_cidade_B);
    printf("Código: %s\n", codigo_B);
    printf("População: %d habitantes\n", populacao_B);
    printf("Área: %.2f km²\n", area_km2_B);
    printf("PIB: %.2f bilhões de reais\n", pib1_B);
    printf("Pontos turísticos: %d\n", pontos_turisticos_B);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_B);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_B);

    return 0;
}