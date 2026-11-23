#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n1, n2;

    printf("Digite o primeiro número positivo: ");
    scanf("%d", &n1);
    printf("Digite o segundo número positivo: ");
    scanf("%d", &n2);

    if (n1 <= 0 || n2 <= 0) {
        printf("Erro: os números precisam ser positivos!\n");
    } else {
        printf("O MDC de %d e %d é: %d\n", n1, n2, mdc(n1, n2));
        simplifica(n1, n2);
    }

    system("PAUSE");
    return 0;
}

int mdc(int a, int b){
    // caso base: quando b é 0, o MDC é o a
    if (b == 0) {
        return a;
    }
    // passo recursivo (Euclides): mdc(a, b) = mdc(b, resto de a por b)
    return mdc(b, a % b);
}

void simplifica(int num, int den){
    int divisor = mdc(num, den);

    printf("Fração simplificada: %d/%d\n", num / divisor, den / divisor);
}
