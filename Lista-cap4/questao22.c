#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Estado de destino (1 = MG, 2 = SP, 3 = RJ, 4 = MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            printf("Preço final com imposto (MG): R$ %.2f\n", valor * 1.07);
            break;
        case 2:
            printf("Preço final com imposto (SP): R$ %.2f\n", valor * 1.12);
            break;
        case 3:
            printf("Preço final com imposto (RJ): R$ %.2f\n", valor * 1.15);
            break;
        case 4:
            printf("Preço final com imposto (MS): R$ %.2f\n", valor * 1.08);
            break;
        default:
            printf("Erro: código de estado inválido!\n");
    }

    system("PAUSE");
    return 0;
}
