#include <stdio.h>
#include "cadastro.h"

int main() {
    Cidade cidades[MAX_CIDADES];
    int qtd = 0;
    int opcao;

    do {
        printf("\n=== Super Trunfo de Paises ===\n");
        printf("1 - Cadastrar nova cidade\n");
        printf("2 - Listar cartas\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao) {
            case 1:
                cadastrarCidade(cidades, &qtd);
                break;
            case 2:
                listarCidades(cidades, qtd);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
