#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado_a,lado_b,lado_c,semiperimetro,area_triangulo;
    printf("Insira o lado A: ");
    scanf("%f", &lado_a);
    printf("Insira o lado B: ");
    scanf("%f", &lado_b);
    printf("Insira o lado C: ");
    scanf("%f", &lado_c);

    semiperimetro = (lado_a + lado_b + lado_c) / 2.0;
    area_triangulo = sqrt(semiperimetro * (semiperimetro - lado_a) * (semiperimetro - lado_b) * (semiperimetro - lado_c));
    printf("A área do triângulo é: %.2f\n", area_triangulo);

    system("PAUSE");
    return 0;
}