#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float salario, novoSalario, desconto;

    do {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salário: R$ ");
                scanf("%f", &salario);
                if (salario <= 2000.00) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }
                printf("Novo salário: R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salário: R$ ");
                scanf("%f", &salario);
                if (salario <= 3000.00) {
                    desconto = salario * 0.08;
                } else {
                    desconto = salario * 0.15;
                }
                printf("Desconto de Imposto de Renda: R$ %.2f\n", desconto);
                printf("Salário após o desconto: R$ %.2f\n", salario - desconto);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opção inválida! Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    system("PAUSE");
    return 0;
}
