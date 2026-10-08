#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota, soma = 0, maior = 0, menor = 10;
    int total = 0;

    printf("Digite as notas (Digite '-1.0' para encerrar):\n");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (nota >= 0.0 && nota <= 10.0) {
            soma += nota;
            total++;

            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        } else {
            printf("Nota inválida, digite uma notaentre 0.0 e 10.0.\n");
        }
        scanf("%f", &nota);
    }

    if (total > 0) {
        printf("Total de alunos: %d\n", total);
        printf("Maior nota: %.1f\n", maior);
        printf("Menor nota: %.1f\n", menor);
        printf("Média da turma: %.2f\n", soma / total);
    } else {
        printf("Nenhuma nota foi digitada.\n");
    }

    system("PAUSE");
    return 0;
}
