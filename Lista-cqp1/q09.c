#include <stdio.h>
#include <stdlib.h>

int main(){
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
system("PAUSE");
return 0;
}

/*O compilador interpreta os caracteres simples da seguinte forma:
- '\n' é interpretado como um caractere de nova linha
- '\t' é interpretado como um caractere de tabulação
- '\"' é interpretado como um caractere de aspa dupla */
