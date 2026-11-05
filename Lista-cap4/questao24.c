#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, c;

    printf("Digite o primeiro ângulo: ");
    scanf("%d", &a);
    printf("Digite o segundo ângulo: ");
    scanf("%d", &b);
    printf("Digite o terceiro ângulo: ");
    scanf("%d", &c);

    if (a + b + c != 180) {
        printf("Erro: a soma dos ângulos não é 180°, não é um triângulo!\n");
    } else if (a == 90 || b == 90 || c == 90) {
        printf("Triângulo Retângulo\n");
    } else if (a > 90 || b > 90 || c > 90) {
        printf("Triângulo Obtusângulo\n");
    } else {
        printf("Triângulo Acutângulo\n");
    }

    system("PAUSE");
    return 0;
}
