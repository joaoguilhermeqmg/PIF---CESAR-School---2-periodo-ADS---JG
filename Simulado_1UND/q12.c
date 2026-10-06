#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

double nota;

do {
printf("Digite uma nota entre 0.0 e 10.0: ");
scanf("%lf", &nota);

if (nota < 0.0 || nota > 10.0)

printf("Nota inválida! Tente novamente.\n");

} while (nota < 0.0 || nota > 10.0);

printf("Nota válida digitada: %.1lf\n", nota);

system("PAUSE");
return 0;
}
