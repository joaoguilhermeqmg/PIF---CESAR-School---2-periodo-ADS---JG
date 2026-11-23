#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPar(int n);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero) == 1) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    system("PAUSE");
    return 0;
}

int ehPar(int n){
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
