#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char letra_maiuscula;

    printf("Insira uma letra maiúscula: ");
    scanf(" %c", &letra_maiuscula);

    letra_maiuscula = letra_maiuscula + 32;
    printf("Letra minúscula: %c\n", letra_maiuscula);

    system("PAUSE");
    return 0;
}