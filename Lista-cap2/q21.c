#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    char a;

    printf("Insira um caractere: ");
    scanf(" %c", &a);

    // O printf mostra o valor inteiro correspondente ao caractere inserido, que é o código ASCII dele.
    printf("Código ASCII: %d\n", a);


    system("PAUSE");
    return 0;
}