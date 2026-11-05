#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;

    printf("Bem-vindo ao atendimento automático\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para consulta de saldo...\n");
            break;
        case 2:
            printf("Direcionando para o extrato...\n");
            break;
        case 3:
            printf("Direcionando para transferência...\n");
            break;
        case 4:
            printf("Direcionando para um atendente...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    system("PAUSE");
    return 0;
}
