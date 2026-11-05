#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float numero;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        printf("Raiz quadrada: %.2f\n", sqrt(numero));
    } else {
        printf("Quadrado: %.2f\n", numero * numero);
    }

    system("PAUSE");
    return 0;
}
