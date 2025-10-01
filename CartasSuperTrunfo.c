#include <stdio.h>

int main() {
    char estado1;
    char codigo1[5];
    char nome_da_cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pontos_turisticos1;

    char estado2;
    char codigo2[5];
    char nome_da_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pontos_turisticos2;

    
    printf("nome da cidade 1:\n ");
    scanf("%s", nome_da_cidade1);

    printf("estado1:\n ");
    scanf(" %c", &estado1);

    printf("populacao1:\n ");
    scanf("%d", &populacao1);

    printf("area1:\n ");
    scanf("%f", &area1);

    printf("PIB1:\n ");
    scanf("%f", &PIB1);

    printf("pontos turisticos1:\n ");
    scanf("%d", &pontos_turisticos1);

    printf("codigo1:\n" );
    scanf("%s", codigo1);

    printf("\n");

    printf("nome da cidade2:\n ");
    scanf("%s", nome_da_cidade2);

    printf("estado2:\n ");
    scanf(" %c", &estado2);

    printf("populacao2:\n ");
    scanf(" %d", &populacao2);

    printf("area2:\n ");
    scanf("%f", &area2);

    printf("PIB2:\n ");
    scanf("%f", &PIB2);

    printf("pontos turisticos2:\n ");
    scanf("%d", &pontos_turisticos2);

    printf("codigo2:\n" );
    scanf("%s", codigo2);

    
    printf("Nome: %s\n", nome_da_cidade1);
    printf("Estado: %c\n", estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

printf("\n");

    printf("Nome: %s\n", nome_da_cidade2);
    printf("Estado: %c\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}