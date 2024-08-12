#ifndef CALCULADORA_H
#define CALCULADORA_H

// Operações básicas
double soma(double a, double b);
double subtracao(double a, double b);
double multiplicacao(double a, double b);
double divisao(double a, double b);

// Funções financeiras
double calcularJurosSimples(double capital, double taxa, int tempo);
double calcularJurosCompostos(double capital, double taxa, int tempo);
double converterTaxa(double taxa, int periodos);
double simularInvestimento(double capital, double taxa, int tempo);

#endif
