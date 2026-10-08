#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor, soma = 0, media;
    int quantidade = 0;

    printf("Digite valores positivos:\n");
    scanf("%f", &valor);

    while (valor >= 0) {
        soma += valor;
        quantidade++;
        scanf("%f", &valor);
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Quantidade de valores: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Média: %.2f\n", media);
    } else {
        printf("Nenhum valor válido foi digitado.\n");
    }

    system("PAUSE");
    return 0;
}
