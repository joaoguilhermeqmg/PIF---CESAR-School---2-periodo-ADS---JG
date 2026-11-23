#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float n1, n2;

    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", soma(n1, n2));
            break;
        case 2:
            printf("Resultado: %.2f\n", subtrai(n1, n2));
            break;
        case 3:
            printf("Resultado: %.2f\n", multiplica(n1, n2));
            break;
        case 4:
            if (n2 == 0) {
                printf("Erro: não existe divisão por zero!\n");
            } else {
                printf("Resultado: %.2f\n", divide(n1, n2));
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    system("PAUSE");
    return 0;
}

float soma(float a, float b){
    return a + b;
}

float subtrai(float a, float b){
    return a - b;
}

float multiplica(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}
