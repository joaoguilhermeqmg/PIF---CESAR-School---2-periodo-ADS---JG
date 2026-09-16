#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dia,mes,ano;

    printf("Insira a data no formato (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Data invertida: %04d/%02d/%02d\n", ano, mes, dia);

    system("PAUSE");
    return 0;
}