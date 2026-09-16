#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float nota1,nota2,nota3,nota4;
    float media,mediap;

    printf("Insira a nota 1: ");
    scanf("%f", &nota1);
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);
    printf("Insira a nota 3: ");
    scanf("%f", &nota3);
    printf("Insira a nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4.0;
    mediap = (nota1 + nota2 + (nota3 * 2) + (nota4 * 2)) / 6.0;
    printf("A média simples das notas é: %.2f\n",media);
    printf("A média ponderada das notas é: %.2f\n",mediap);

    system("PAUSE");
    return 0;
}