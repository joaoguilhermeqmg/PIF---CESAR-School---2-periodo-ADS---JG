#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float lado_a,lado_b,hipot;

    printf("Insira o primeiro cateto: ");
    scanf("%f", &lado_a);
    printf("Insira o segundo cateto: ");
    scanf("%f", &lado_b);

    hipot = sqrt((lado_a * lado_a) + (lado_b * lado_b));
    printf("Hipotenusa: %.2f\n", hipot);

    system("PAUSE");
    return 0;
}