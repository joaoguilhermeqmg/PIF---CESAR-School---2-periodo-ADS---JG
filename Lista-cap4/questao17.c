#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float valor, valorFinal, parcela, comissao;
    int opcao;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor);
    printf("Opção de pagamento (1 = À Vista com 10%% de desconto, 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valorFinal = valor * 0.90;
        comissao = valorFinal * 0.05;
        printf("Valor final a pagar: R$ %.2f\n", valorFinal);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        parcela = valor / 3;
        comissao = valor * 0.05;
        printf("Valor de cada parcela: R$ %.2f\n", parcela);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Opção inválida!\n");
    }

    system("PAUSE");
    return 0;
}
