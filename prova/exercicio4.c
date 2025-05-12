#include <stdio.h>
#include <locale.h>
#include <cmath>

int main(){
    setlocale(category: LC_ALL, locale: "Portuguese");
    int n;
    // Entrada do Numero maior que 5
    printf(format: "Digite um numero maior que 5: ");
    scanf(format: "%d", &n);
    if(n <= 5){
        printf(format: "Numero invalido, deve ser maior que 5\n");
    }
    // Formato do desenho com numeo de linhas
    // Base x,y para o desenho 
    for (int x=o; x < n; x++){
       for (int y=0; y < n; y++){
        if ( x = 0; x < n; x== 0){
            for (int y=0; y < n; y++){
            // Posição das colunas & base 
            if (y == n -2 || 
                (x == n - 1 && y <= n - 2) ||
                (x >= n - 2 && y == n - 0)) {
                printf(format: "X");
            } else {
                printf(format: " ");
                }
            }
            printf(format: "X");
}