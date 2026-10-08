#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int num, i, achou = 0;

    printf("Digite um número limite positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d\n", i);
            achou = 1;
        }
    }

    if (achou == 0) {
        printf("Nenhum número encontrado.\n");
    }

    system("PAUSE");
    return 0;
}
