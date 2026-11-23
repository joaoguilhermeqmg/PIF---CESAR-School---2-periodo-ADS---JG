#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehBissexto(int ano);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ehBissexto(ano) == 1) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    system("PAUSE");
    return 0;
}

int ehBissexto(int ano){
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}
