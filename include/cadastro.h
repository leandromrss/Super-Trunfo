#ifndef CADASTRO_H
#define CADASTRO_H

#define MAX_CIDADES 100

typedef struct {
    char estado[50];
    int codigo;
    char nome[100];
    int populacao;
    float pib;
    float area;
    int pontos_turisticos;
} Cidade;

void cadastrarCidade(Cidade cidades[], int *qtd);
void listarCidades(Cidade cidades[], int qtd);

#endif
