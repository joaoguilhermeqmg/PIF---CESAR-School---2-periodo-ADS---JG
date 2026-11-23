#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int soma(int a, int b);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n1, n2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    resultado = soma(n1, n2);

    printf("A soma é: %d\n", resultado);

    system("PAUSE");
    return 0;
}

int soma(int a, int b){
    return a + b;
}
