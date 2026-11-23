#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int somaDigitos(int n);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("A soma dos dígitos é: %d\n", somaDigitos(numero));

    system("PAUSE");
    return 0;
}

int somaDigitos(int n){
    // caso base: quando n é 0 não tem mais dígitos, então retorna 0
    if (n == 0) {
        return 0;
    }
    // passo recursivo: pega o último dígito (n % 10) e soma com os dígitos do resto (n / 10)
    return (n % 10) + somaDigitos(n / 10);
}
