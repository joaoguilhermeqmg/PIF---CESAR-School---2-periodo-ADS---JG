#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float salario, aumento, novoSalario;
    int cargo;

    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    printf("Código do cargo (1 = Técnico, 2 = Gerente, 3 = Demais Cargos): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            if (salario <= 3000) {
                aumento = salario * 0.15;
            } else {
                aumento = salario * 0.10;
            }
            break;
        case 2:
            if (salario <= 5000) {
                aumento = salario * 0.10;
            } else {
                aumento = salario * 0.05;
            }
            break;
        case 3:
            aumento = salario * 0.08;
            break;
        default:
            printf("Código de cargo inválido!\n");
            system("PAUSE");
            return 0;
    }

    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novoSalario);

    system("PAUSE");
    return 0;
}
