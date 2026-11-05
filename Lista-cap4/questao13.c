#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char operacao;
    float num1, num2;

    printf("Escolha a operação:\n");
    printf("+ (Soma)\n");
    printf("- (Subtração)\n");
    printf("* (Multiplicação)\n");
    printf("/ (Divisão)\n");
    printf("^ (Potenciação)\n");
    printf("Opção: ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: não existe divisão por zero!\n");
            } else {
                printf("Resultado: %.2f\n", num1 / num2);
            }
            break;
        case '^':
            printf("Resultado: %.2f\n", pow(num1, num2));
            break;
        default:
            printf("Erro: operação inválida!\n");
    }

    system("PAUSE");
    return 0;
}
