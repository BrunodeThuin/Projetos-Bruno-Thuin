#include <stdio.h>

int main() {
    int m, n, menor, mdc, mmc;

    // Solicita dois números inteiros positivos
    printf("Digite dois números inteiros positivos (m e n): ");
    scanf("%d %d", &m, &n);

    // Verifica se os números são positivos
    if (m <= 0 || n <= 0) {
        printf("Os números devem ser inteiros positivos.\n");
        return 0;
    }

    // Calcula o MDC de forma básica
    menor = (m < n) ? m : n; // Pega o menor número entre m e n
    for (int i = menor; i >= 1; i--) {
        if (m % i == 0 && n % i == 0) {
            mdc = i;
            break;
        }
    }

    // Calcula o MMC
    mmc = (m * n) / mdc;

    // Exibe os resultados
    printf("O MDC de %d e %d é: %d\n", m, n, mdc);
    printf("O MMC de %d e %d é: %d\n", m, n, mmc);

    return 0;
}