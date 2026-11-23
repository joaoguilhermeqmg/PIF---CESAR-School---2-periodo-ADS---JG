#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Para compilar COM depuração, tire as barras da linha abaixo.
// Para compilar SEM depuração, deixe como comentário.
// #define DEBUG

int somaAteN(int n);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("A soma de 1 até %d é: %d\n", n, somaAteN(n));

    // Com DEBUG definido, aparece o valor parcial da soma a cada volta do laço.
    // Sem DEBUG, aparece só o resultado final.

    system("PAUSE");
    return 0;
}

int somaAteN(int n){
    int soma = 0;
    int i;

    for (i = 1; i <= n; i++) {
        soma = soma + i;

        #ifdef DEBUG
            printf("i = %d, soma parcial = %d\n", i, soma);
        #endif
    }

    return soma;
}
