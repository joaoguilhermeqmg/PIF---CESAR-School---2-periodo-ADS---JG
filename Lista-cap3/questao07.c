#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i;

    // Versão 1: usando for
    printf("Versão com for:\n");
    for (i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // Versão 2: usando while
    printf("Versão com while:\n");
    i = 0;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // Versão 3: usando do-while
    printf("Versão com do-while:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n\n");

    system("PAUSE");
    return 0;
}

/*
O for é o mais adequado, porque sabemos exatamente quantas vezes o laço vai repetir. Ele deixa a inicialização, a condição e o incremento na mesma linha, então o código fica mais curto e fácil de ler.
*/
