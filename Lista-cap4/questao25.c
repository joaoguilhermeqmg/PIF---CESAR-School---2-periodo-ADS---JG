#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int total, entregue, troco;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor total a pagar: ");
    scanf("%d", &total);
    printf("Digite o valor entregue pelo cliente: ");
    scanf("%d", &entregue);

    if (entregue < total) {
        printf("Erro: o valor entregue é insuficiente!\n");
    } else {
        troco = entregue - total;
        printf("Troco: R$ %d\n", troco);

        n100 = troco / 100;
        troco = troco % 100;
        n50 = troco / 50;
        troco = troco % 50;
        n20 = troco / 20;
        troco = troco % 20;
        n10 = troco / 10;
        troco = troco % 10;
        n5 = troco / 5;
        troco = troco % 5;
        n2 = troco / 2;
        troco = troco % 2;

        if (n100 > 0) {
            printf("%d cédula(s) de R$ 100\n", n100);
        }
        if (n50 > 0) {
            printf("%d cédula(s) de R$ 50\n", n50);
        }
        if (n20 > 0) {
            printf("%d cédula(s) de R$ 20\n", n20);
        }
        if (n10 > 0) {
            printf("%d cédula(s) de R$ 10\n", n10);
        }
        if (n5 > 0) {
            printf("%d cédula(s) de R$ 5\n", n5);
        }
        if (n2 > 0) {
            printf("%d cédula(s) de R$ 2\n", n2);
        }
        if (troco > 0) {
            printf("Sobrou R$ %d que não dá para pagar com essas cédulas\n", troco);
        }
    }

    system("PAUSE");
    return 0;
}
