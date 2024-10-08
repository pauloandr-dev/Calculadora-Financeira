#include <stdio.h>
#include <math.h>
#include "calculadora.h"

void menuPrincipal() {
    int opcao;
    double a, b;
    double capital, taxa;
    int tempo;

    while (1) {
        printf("Calculadora Financeira\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Calcular Juros Simples\n");
        printf("6. Calcular Juros Compostos\n");
        printf("7. Converter Taxa\n");
        printf("8. Simular Investimento\n");
        printf("9. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Digite os dois números: ");
                scanf("%lf %lf", &a, &b);
                printf("Resultado: %.2lf\n", soma(a, b));
                break;
            case 2:
                printf("Digite os dois números: ");
                scanf("%lf %lf", &a, &b);
                printf("Resultado: %.2lf\n", subtracao(a, b));
                break;
            case 3:
                printf("Digite os dois números: ");
                scanf("%lf %lf", &a, &b);
                printf("Resultado: %.2lf\n", multiplicacao(a, b));
                break;
            case 4:
                printf("Digite os dois números: ");
                scanf("%lf %lf", &a, &b);
                printf("Resultado: %.2lf\n", divisao(a, b));
                break;
            case 5:
                printf("Digite o capital, taxa e tempo: ");
                scanf("%lf %lf %d", &capital, &taxa, &tempo);
                printf("Juros Simples: %.2lf\n", calcularJurosSimples(capital, taxa, tempo));
                break;
            case 6:
                printf("Digite o capital, taxa e tempo: ");
                scanf("%lf %lf %d", &capital, &taxa, &tempo);
                printf("Juros Compostos: %.2lf\n", calcularJurosCompostos(capital, taxa, tempo));
                break;
            case 7:
                printf("Digite a taxa e o número de períodos: ");
                scanf("%lf %d", &taxa, &tempo);
                printf("Taxa Convertida: %.2lf\n", converterTaxa(taxa, tempo));
                break;
            case 8:
                printf("Digite o capital, taxa e tempo: ");
                scanf("%lf %lf %d", &capital, &taxa, &tempo);
                printf("Valor Futuro: %.2lf\n", simularInvestimento(capital, taxa, tempo));
                break;
            case 9:
                printf("Saindo...\n");
                return;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    }
}

int main() {
    menuPrincipal();
    return 0;
}
