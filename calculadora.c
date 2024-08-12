#include "calculadora.h"

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

double calcularJurosSimples(double capital, double taxa, int tempo) {
    return capital * taxa * tempo;
}
