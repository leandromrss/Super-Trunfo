#include "calculos.h"

float calcularDensidade(int populacao, float area) {
    if (area == 0) return 0;
    return populacao / area;
}

float calcularPIBPerCapita(float pib, int populacao) {
    if (populacao == 0) return 0;
    return pib / populacao;
}
