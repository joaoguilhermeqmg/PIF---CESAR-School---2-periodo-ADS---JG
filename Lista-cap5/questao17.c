#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;
    long fat1, fat2;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: o número não pode ser negativo!\n");
    } else {
        fat1 = fatorialIterativo(numero);
        fat2 = fatorialRecursivo(numero);

        printf("Fatorial iterativo: %ld\n", fat1);
        printf("Fatorial recursivo: %ld\n", fat2);

        if (fat1 == fat2) {
            printf("Os resultados são iguais.\n");
        } else {
            printf("Os resultados são diferentes.\n");
        }
    }

    system("PAUSE");
    return 0;
}

long fatorialIterativo(int n){
    long resultado = 1;
    int i;

    for (i = 1; i <= n; i++) {
        resultado = resultado * i;
    }

    return resultado;
}

long fatorialRecursivo(int n){
    if (n == 0) {
        return 1;
    }
    return n * fatorialRecursivo(n - 1);
}
