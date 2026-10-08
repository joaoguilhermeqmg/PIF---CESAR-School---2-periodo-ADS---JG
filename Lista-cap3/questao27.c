#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;

    printf("Digite o valor do saque (inteiro positivo): ");
    scanf("%d", &valor);

    while (valor >= 100) {
        valor -= 100;
        c100++;
    }
    while (valor >= 50) {
        valor -= 50;
        c50++;
    }
    while (valor >= 20) {
        valor -= 20;
        c20++;
    }
    while (valor >= 10) {
        valor -= 10;
        c10++;
    }
    while (valor >= 5) {
        valor -= 5;
        c5++;
    }
    while (valor >= 2) {
        valor -= 2;
        c2++;
    }

    printf("Cédulas de R$ 100: %d\n", c100);
    printf("Cédulas de R$ 50: %d\n", c50);
    printf("Cédulas de R$ 20: %d\n", c20);
    printf("Cédulas de R$ 10: %d\n", c10);
    printf("Cédulas de R$ 5: %d\n", c5);
    printf("Cédulas de R$ 2: %d\n", c2);

    if (valor > 0) {
        printf("Sobrou R$ %d que não pode ser pago com essas cédulas.\n", valor);
    }

    system("PAUSE");
    return 0;
}
