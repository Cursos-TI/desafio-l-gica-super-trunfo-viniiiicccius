#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1[30], codigo1[10], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Variáveis da carta 2
    char estado2[30], codigo2[10], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado: ");
    scanf("%[^\n]", estado1);
    getchar();
    printf("Código da carta: ");
    scanf("%[^\n]", codigo1);
    getchar();
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // lê até o \n
    getchar();
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    getchar();
    printf("PIB: ");
    scanf("%f", &pib1);
    getchar();
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();

    // Leitura dos dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado: ");
    scanf("%[^\n]", estado2);
    getchar();
    printf("Código da carta: ");
    scanf("%[^\n]", codigo2);
    getchar();
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    getchar();
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    getchar();
    printf("PIB: ");
    scanf("%f", &pib2);
    getchar();
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pib_per_capita1 = pib1 / populacao1;
    float pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados
    printf("\nCARTA 1:\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.6f\n", pib_per_capita1);
    printf("-----------------------------\n");

    printf("CARTA 2:\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.6f\n", pib_per_capita2);
    printf("-----------------------------\n");

    // Comparação por população
    printf("Comparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
