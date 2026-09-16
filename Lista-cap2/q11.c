#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const float pi = 3.141593;
    float graus,radiano;

    printf("Insira o ângulo em graus: ");
    scanf("%f", &graus);

    radiano = graus * (pi / 180.0);

    printf("O número de radianos é: %.2f\n", radiano);

    system("PAUSE");
    return 0;
}