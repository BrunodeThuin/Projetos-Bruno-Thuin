#include <stdio.h>
#include <locale.h>

int main() {
    int anoNascimento, idadeEm2025, ano50Anos;

    // Ano de nascimento do usuário
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    // Idade no final de 2025
    idadeEm2025 = 2025 - anoNascimento;

    // Ano em que o usuário fez/fará 50
    ano50Anos = anoNascimento + 50;

    printf("Sua idade no final de 2025 será: %d anos\n", idadeEm2025);
    printf("Você fez ou fará 50 anos no ano: %d\n", ano50Anos);

    return 0;
}