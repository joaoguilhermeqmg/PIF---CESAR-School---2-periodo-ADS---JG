#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fibonacci(int n);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int quantidade, i;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Erro: a quantidade precisa ser positiva!\n");
    } else {
        for (i = 0; i < quantidade; i++) {
            printf("%ld ", fibonacci(i));
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}

// A versão recursiva fica lenta para n grande porque ela calcula os mesmos
// termos várias vezes (fibonacci(n-1) e fibonacci(n-2) repetem muitas chamadas),
// e o número de chamadas quase dobra a cada aumento de n.
long fibonacci(int n){
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
