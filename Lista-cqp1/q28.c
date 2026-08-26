#include <stdio.h>

int main(){
    int num1, num2, num3;
    double media;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);
    printf("Insira o terceiro número: ");
    scanf("%d", &num3);
    
    media = (num1 + num2 + num3)/3.0;

    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
