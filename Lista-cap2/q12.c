#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num,sucessor,antecessor;

    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    sucessor = num;
    antecessor = num;
    sucessor++;
    antecessor--;

    printf("Antecessor do número (%d): %d\n", num, antecessor);
    printf("Sucessor do número (%d): %d\n", num, sucessor);

    system("PAUSE");
    return 0;
}