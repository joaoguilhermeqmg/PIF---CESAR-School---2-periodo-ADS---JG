#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // A macro faz só a troca do texto, então DOBRO(2+3) vira 2+3*2 = 8.
    // A função recebe o valor já calculado (5) e devolve 5*2 = 10.
    // Por isso os resultados são diferentes.
    printf("Macro: %d\n", DOBRO(2+3));
    printf("Função: %d\n", dobro(2+3));

    // Corrigindo a macro com parênteses de proteção
    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    printf("Macro corrigida: %d\n", DOBRO(2+3));

    system("PAUSE");
    return 0;
}

int dobro(int x){
    return x * 2;
}
