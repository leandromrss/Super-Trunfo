#include <stdio.h>
#include <string.h>
#include "cadastro.h"
#include "calculos.h"

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrarCidade(Cidade cidades[], int *qtd) {
    char opcao = 's';
    while (opcao == 's' || opcao == 'S') {
        Cidade nova;

        printf("Estado: ");
        fgets(nova.estado, sizeof(nova.estado), stdin);
        nova.estado[strcspn(nova.estado, "\n")] = 0;

        printf("Codigo: ");
        scanf("%d", &nova.codigo);
        limparBuffer();

        printf("Nome da cidade: ");
        fgets(nova.nome, sizeof(nova.nome), stdin);
        nova.nome[strcspn(nova.nome, "\n")] = 0;

        printf("Populacao: ");
        scanf("%d", &nova.populacao);
        limparBuffer();

        printf("PIB: ");
        scanf("%f", &nova.pib);
        limparBuffer();

        printf("Area (km2): ");
        scanf("%f", &nova.area);
        limparBuffer();

        printf("Numero de pontos turisticos: ");
        scanf("%d", &nova.pontos_turisticos);
        limparBuffer();

        cidades[*qtd] = nova;
        (*qtd)++;

        printf("Deseja cadastrar outra cidade? (s/n): ");
        scanf(" %c", &opcao);
        limparBuffer();
    }
}

void listarCidades(Cidade cidades[], int qtd) {
    printf("\n===== Cartas Cadastradas =====\n");
    for (int i = 0; i < qtd; i++) {
        Cidade c = cidades[i];
        float densidade = calcularDensidade(c.populacao, c.area);
        float pibpc = calcularPIBPerCapita(c.pib, c.populacao);

        printf("\n--- Cidade %s ---\n", c.nome);
        printf("Estado: %s\n", c.estado);
        printf("Codigo: %d\n", c.codigo);
        printf("Populacao: %d\n", c.populacao);
        printf("PIB: %.2f\n", c.pib);
        printf("Area: %.2f km2\n", c.area);
        printf("Pontos turisticos: %d\n", c.pontos_turisticos);
        printf("Densidade populacional: %.2f hab/km2\n", densidade);
        printf("PIB per capita: %.2f\n", pibpc);
    }
}
