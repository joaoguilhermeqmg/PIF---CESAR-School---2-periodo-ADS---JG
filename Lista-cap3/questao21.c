#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;

    printf("Adivinhe a letra minúscula que eu sorteei (a-z)!\n");

    do {
        printf("Seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta) {
            printf("Dica: a letra secreta vem DEPOIS de '%c'.\n", palpite);
        } else if (palpite > secreta) {
            printf("Dica: a letra secreta vem ANTES de '%c'.\n", palpite);
        }
    } while (palpite != secreta);

    printf("Parabéns! Você acertou a letra '%c'!\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);

    system("PAUSE");
    return 0;
}
