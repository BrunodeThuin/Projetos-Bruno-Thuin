#include <stdio.h>

int main() {
    float temperatura, convertida;
    char unidade;

    // Pergunta a unidade
    printf("A temp está em Celsius ou Fahrenheit? Digite C ou F: ");
    scanf(" %c", &unidade);

    // Pergunta o valor da temperatura
    printf("Qual é a temperatura");
    scanf("%f", &temperatura);

    // Converção
    if (unidade == 'C' || unidade == 'c') {
     // celsius ---> Fahrenheit
    convertida = (temperatura * 9 / 5) + 32;
     printf("A temperatura em Fahrenheit é: %.2f°F\n", convertida);
    } else if (unidade == 'F' || unidade == 'f') {
     // Fahrenheit ---> Celsius
     convertida = (temperatura - 32) * 5 / 9;
     printf("A temperatura em Celsius é: %.2f°C\n", convertida);
    } else {
     // Unidade inválida
     printf("Unidade inválida! Digite C para Celsius ou F para Fahrenheit.\n");
    }

    return 0;
}