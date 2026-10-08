#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, i;
    long long int anterior = 1, atual = 1, proximo;

    printf("Digite o número do termo desejado: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O número do termo deve ser maior que 0.\n");
    } else {
        printf("Termos: ");
        for (i = 1; i <= n; i++) {
            if (i <= 2) {
                printf("1 ");
            } else {
                proximo = anterior + atual;
                printf("%lld ", proximo);
                anterior = atual;
                atual = proximo;
            }
        }
        printf("\n");
        printf("O termo %d vale %lld\n", n, (n <= 2) ? 1 : atual);
    }

    system("PAUSE");
    return 0;
}
