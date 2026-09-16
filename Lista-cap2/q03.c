#include <stdio.h>;
int main(){
    int num;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("Decimal: %d \nHexadecimal: %x \nOctal: %o \nASCII: %c\n", num, num, num, num);
            
    return 0;
}