#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i, divisores = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);

    if (divisores == 2) {
        printf("%d é um número primo.\n", n);
    } else {
        printf("%d não é um número primo.\n", n);
    }

    system("PAUSE");
    return 0;
}
