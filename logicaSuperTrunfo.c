#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    char estado[3];
    char codigoCarta[3];
    char nomeCidade[30];
    double populacao;
    double areaKm;
    double pib;
    int pontosTuristicos;
    double densidadeDemografica;
    double pibPercapita;
} dadosCidade;

dadosCidade cidade[2];

// Calcula a densidade demográfica (habitantes/km²)
double calculaDensidadeDemografica(double populacao, double areaKm) {
    return populacao / areaKm;
}

// Calcula o PIB per capita (PIB / população)
double calculaPibPercapita(double pib, double populacao) {
    return pib / populacao;
}

// Exibe os dados formatados de uma cidade
void exibirCidade(dadosCidade c) {
    printf("\n==================================\n");
    printf("Código da Carta.........: %s\n", c.codigoCarta);
    printf("Estado..................: %s\n", c.estado);
    printf("Cidade..................: %s\n", c.nomeCidade);
    printf("População...............: %.0lf\n", c.populacao);
    printf("Área (Km²)..............: %.2lf\n", c.areaKm);
    printf("PIB (em mil)............: %.2lf\n", c.pib);
    printf("Pontos Turísticos.......: %d\n", c.pontosTuristicos);
    printf("Densidade Demográfica...: %.2lf hab/km²\n", c.densidadeDemografica);
    printf("PIB per Capita..........: %.2lf\n", c.pibPercapita);
}

int main() {
    setlocale(LC_ALL, "C.UTF-8");

    printf("=== Cadastro de Cidades ===\n");

    for (int i = 0; i < 2; i++) {
        printf("\n>>> CIDADE %d <<<\n", i + 1);

        printf("Código da Carta (2 letras): ");
        scanf("%2s", cidade[i].codigoCarta);

        printf("Estado (UF): ");
        scanf("%2s", cidade[i].estado);

        printf("Nome da Cidade: ");
        scanf("%29s", cidade[i].nomeCidade);

        printf("População: ");
        scanf("%lf", &cidade[i].populacao);

        printf("Área (em Km²): ");
        scanf("%lf", &cidade[i].areaKm);

        printf("PIB (em mil): ");
        scanf("%lf", &cidade[i].pib);

        printf("Quantidade de Pontos Turísticos: ");
        scanf("%d", &cidade[i].pontosTuristicos);
    }

    // Calcula os indicadores derivados
    for (int i = 0; i < 2; i++) {
        cidade[i].densidadeDemografica = calculaDensidadeDemografica(cidade[i].populacao, cidade[i].areaKm);
        cidade[i].pibPercapita = calculaPibPercapita(cidade[i].pib, cidade[i].populacao);
    }

    // Mostra tudo
    printf("\n\n=== DADOS COMPLETOS ===\n");
    for (int i = 0; i < 2; i++) {
        exibirCidade(cidade[i]);
    }

    return 0;
}
