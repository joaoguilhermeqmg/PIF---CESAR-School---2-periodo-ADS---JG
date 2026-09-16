/*
a) Porque ela não é uma biblioteca padrão do C e funciona apenas em alguns compiladores. Se você tentar compilar um código com <conio.h> no Linux, macOS ou em compiladores modernos, o programa não vai compilar.
b) Entrada de caracteres: scanf("%c", &variavel); / Saída de caracteres: printf("%c", variavel);
c)#include <stdio.h>
*/
#include <stdio.h>
int main(){
    char c;
    printf("Digite um caractere: ");
    // O espaco antes do %c manda o scanf ignorar espaços, tabs e o (ENTER) anterior
    scanf(" %c", &c);
    printf("Voce digitou: %c\n", c);
    return 0;
}