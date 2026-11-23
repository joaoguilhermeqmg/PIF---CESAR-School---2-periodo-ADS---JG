#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maior(int a, int b);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    printf("O maior número é: %d\n", maior(n1, n2));

    system("PAUSE");
    return 0;
}

int maior(int a, int b){
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
