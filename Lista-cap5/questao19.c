#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void contagem(int n);
void contagemCrescente(int n);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um número positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: o número precisa ser positivo!\n");
    } else {
        printf("Contagem regressiva:\n");
        contagem(n);

        printf("Contagem crescente:\n");
        contagemCrescente(n);
    }

    system("PAUSE");
    return 0;
}

void contagem(int n){
    if (n == 0) {
        printf("Fogo!\n");
    } else {
        printf("%d\n", n);
        contagem(n - 1);
    }
}

// Nesta versão a chamada recursiva vem ANTES do printf.
// Por isso a função desce até o 1 primeiro e só depois, na volta,
// vai imprimindo os números em ordem crescente.
// Na versão de cima o printf vem antes da chamada, então imprime de n até 1.
void contagemCrescente(int n){
    if (n >= 1) {
        contagemCrescente(n - 1);
        printf("%d\n", n);
    }
}
