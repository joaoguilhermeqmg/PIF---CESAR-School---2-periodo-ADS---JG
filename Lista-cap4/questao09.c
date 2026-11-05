#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratório: ");
    scanf("%f", &lab);
    printf("Nota da Avaliação Semestral: ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final: ");
    scanf("%f", &final);

    media = (lab * 2 + semestral * 3 + final * 5) / 10;

    printf("Média ponderada: %.2f\n", media);

    if (media < 3.0) {
        printf("Situação: Reprovado\n");
    } else if (media < 5.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Aprovado\n");
    }

    system("PAUSE");
    return 0;
}
