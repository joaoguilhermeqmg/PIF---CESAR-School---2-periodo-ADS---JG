#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float a, b, c, delta, x1, x2;

    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        printf("Erro: o valor de a não pode ser zero!\n");
    } else {
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("A equação não possui raízes reais.\n");
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Raiz única: x = %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    system("PAUSE");
    return 0;
}
