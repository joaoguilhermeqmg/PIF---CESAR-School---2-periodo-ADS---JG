/*
a) A variável soma foi declarada dentro do bloco do for, então ela só existe lá dentro. O printf está fora do for, onde a soma não existe, por isso o compilador dá erro de variável não declarada.


b)Porque a variável soma é criada de novo com valor 0 a cada iteração. Assim ela nunca acumula os valores anteriores e sempre mostraria só o quadrado do número atual em vez da soma total.


c)
*/

//Código corrigido:
#include <stdio.h>
#include <stdlib.h>
int main() {
 int i;
 int soma = 0;
 for (i = 1; i < 10; i++) {
 soma += i * i;
 }
 printf("Soma final = %d\n", soma);
 system("PAUSE");
 return 0;
}

/*
Uma variável declarada dentro de chaves "{ }" só pode ser usada dentro daquelas chaves (visibilidade). Tempo de vida: ela é criada quando o bloco começa e deixa de existir quando o bloco termina; se o bloco repete, ela é criada de novo a cada vez e perde o valor anterior. Para guardar o valor entre as repetições, é preciso declarar a variável fora do bloco
*/
