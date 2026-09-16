#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num;
    float decimaparte;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    decimaparte = num/10.0;

    printf("Quadrado do número (%d): %d\n", num, num * num);
    printf("Décima parte do número (%d): %.2f\n", num, decimaparte);

    system("PAUSE");
    return 0;
}