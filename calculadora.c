#include "calculadora.h"

// Implementação das operações básicas
double soma(double a, double b) {
    return a + b;
}

double subtracao(double a, double b) {
    return a - b;
}

double multiplicacao(double a, double b) {
    return a * b;
}

double divisao(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0;
    }
}

// Implementação das funções financeiras
double calcularJurosSimples(double capital, double taxa, int tempo) {
    return capital * taxa * tempo;
}

double calcularJurosCompostos(double capital, double taxa, int tempo) {
    return capital * pow((1 + taxa), tempo) - capital;
}

double converterTaxa(double taxa, int periodos) {
    return pow((1 + taxa), periodos) - 1;
}

double simularInvestimento(double capital, double taxa, int tempo) {
    return capital * pow((1 + taxa), tempo);
}
