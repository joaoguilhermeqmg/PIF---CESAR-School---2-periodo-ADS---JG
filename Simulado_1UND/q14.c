#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

int senha_secreta = 2026;
int tentativa, i, acertou = 0;

for (i = 1; i <= 3; i++) {
printf("Tentativa %d/3 — Digite a senha: ", i);
scanf("%d", &tentativa);

if (tentativa == senha_secreta) {

printf("Acesso Concedido!\n");

acertou = 1;
break;

} else {
printf("Senha incorreta!\n");

}
}
if (!acertou)

printf("Conta Bloqueada por Seguranca!\n");

system("PAUSE");
return 0;
}