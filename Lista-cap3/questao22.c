#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n, linha, coluna, numero = 1;

    printf("Digite o número de linhas: ");
    scanf("%d", &n);

    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", numero);
            numero++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
