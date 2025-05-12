#include <stdio.h>


int main(){
    // Comentário de linha

    /* Comentário
        de
        bloco  */

    // Variáveis
    // Tipo de variáveis
    // int (inteiros), float(reais), char (caracter)

    // Declaração de variáveis
    int inteiro;
    float real;
    char caracter;

    // Declarando e inicializando a variável
    char texto[20] = "C eh facil!";

    // Inicialização das variáveis
    inteiro = 12;
    real = 3.14;
    caracter = 'S';

    // Pulando linha: \n
    printf("Hello, World!\n\n");

    // Mostrando as variáveis
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", real);
    printf("Caracter: %c\n", caracter);
    printf("String (texto): %s", texto);



    return 0;
}
