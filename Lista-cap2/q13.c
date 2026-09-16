#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado,base,altura;

    printf("Insira o lado do quadrado: ");
    scanf("%f", &lado);

    float area_quadrado = lado * lado;
    printf("A área do quadrado é: %.2f\n", area_quadrado);

    printf("\nInsira a base do retângulo: ");
    scanf("%f", &base);

    printf("Insira a altura do retângulo: ");
    scanf("%f", &altura);

    float area_retangulo = base * altura;
    printf("A área do retângulo é: %.2f\n", area_retangulo);

    float area_triangulo = (base * altura) / 2.0;
    printf("A área do triângulo é: %.2f\n", area_triangulo);

    system("PAUSE");
    return 0;
}