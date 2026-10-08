#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i, j;

    do {
        printf("Digite uma dimensão ímpar (entre 3 e 19): ");
        scanf("%d", &n);
    } while (n < 3 || n > 19 || n % 2 == 0);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
