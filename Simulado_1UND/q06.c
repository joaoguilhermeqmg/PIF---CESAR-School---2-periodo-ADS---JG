/*
a) A variável soma foi declarada dentro do bloco do for. Ao chegar no printf, esse bloco já foi encerrado e a variável não existe mais.

b) O laço vai de i = 1 até 10, mas: quando i = 5, o continue pula essa iteração; quando i = 8, o break encerra o laço completamente. Portanto, só são executadas as iterações: i = 1, 2, 3, 4, 6, 7

c) */
#include <stdio.h>
#include <stdlib.h>
int main(){
int i;
int soma = 0;
for (i = 1; i <= 10; i++) {
if (i == 5) continue;
if (i == 8) break;
soma += i * i;
}
printf("Soma final = %d\n", soma);
system("PAUSE");
return 0;
}
/*
Soma final = 1 + 4 + 9 + 16 + 36 + 49 = 115

Resulttado impresso no console:
Soma final = 115
*/