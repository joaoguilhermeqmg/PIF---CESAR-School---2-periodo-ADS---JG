#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int senha = 2026, tentativa, i;
    int acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", i);
            acertou = 1;
            break;
        }
    }

    if (acertou == 0) {
        printf("Conta Bloqueada por Segurança!\n");
    }

    system("PAUSE");
    return 0;
}
