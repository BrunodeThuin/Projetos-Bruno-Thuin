#include <stdio.h>

int main() {
    int numero, positivos = 0, negativos = 0;

    printf("Digite n° inteiros (digite 0 para parar):\n");
    // Pede o 1° n°
    printf("Digite um n°: ");
    scanf("%d", &numero);
    // enquanto n for zero continua
    while (numero != 0) {
        // soma os n° positivos
        // soma os n° negativos
    if (numero > 0) {
    positivos++;
        } else {
    negativos++;
        }
        // Solicita o próximo número
        printf("Digite um n°: ");
        scanf("%d", &numero);
    }
    // Resultados
    printf("\nQuantidade de n° positivos: %d\n", positivos);
    printf("Quantidade de n° negativos: %d\n", negativos);

    // Qual grp tem mais n°
    if (positivos > negativos) {
    printf("Tem mais n° positivos.\n");
    } else if (negativos > positivos) {
    printf("Tem mais n° negativos.\n");
    } else {
    printf("Tem a mesma quantidade de n° positivos e negativos.\n");
    }

    return 0;
}