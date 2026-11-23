#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "areas.h"

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio, base, altura;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Área do círculo: %.2f\n", A_CIRC(raio));
    printf("Área do retângulo: %.2f\n", A_RET(base, altura));
    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));

    system("PAUSE");
    return 0;
}
