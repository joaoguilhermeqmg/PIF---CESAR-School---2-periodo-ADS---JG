#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

int num, i;
long long int fatorial = 1;

printf("Digite um número inteiro: ");
scanf("%d", &num);

if (num < 0) {

printf("Número inválido! Fatorial não existe para números negativos.\n");

} else {

for (i = 1; i <= num; i++)
fatorial *= i;

printf("%d! = %lld\n", num, fatorial);
}

system("PAUSE");
return 0;
}
