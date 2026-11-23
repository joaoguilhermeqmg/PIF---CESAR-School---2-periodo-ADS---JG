#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long potencia(int base, int expoente);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if (expoente < 0) {
        printf("Erro: o expoente não pode ser negativo!\n");
    } else {
        printf("%d elevado a %d é: %ld\n", base, expoente, potencia(base, expoente));
    }

    system("PAUSE");
    return 0;
}

long potencia(int base, int expoente){
    // caso base: qualquer número elevado a 0 é 1
    if (expoente == 0) {
        return 1;
    }
    // passo recursivo: base * base elevado a (expoente - 1)
    return base * potencia(base, expoente - 1);
}
