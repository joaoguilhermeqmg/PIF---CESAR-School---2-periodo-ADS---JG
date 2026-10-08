#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, num, i, divisores;
    int soma = 0;

    do {
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B (maior que A): ");
        scanf("%d", &b);

        if (a <= 0 || b <= 0 || a >= b) {
            printf("Valores inválidos! Digite positivos e com A < B.\n");
        }
    } while (a <= 0 || b <= 0 || a >= b);

    printf("Primos entre %d e %d:\n", a, b);

    for (num = a; num <= b; num++) {
        divisores = 0;

        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", num);
            soma += num;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    system("PAUSE");
    return 0;
}
