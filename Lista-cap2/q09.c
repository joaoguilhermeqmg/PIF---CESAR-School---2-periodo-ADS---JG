#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int num1,num2;
    float div;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    printf("A soma dos números (%d e %d) é: %d\n", num1, num2, num1 + num2);
    printf("A subtração dos números (%d e %d) é: %d\n", num1, num2, num1 - num2);
    printf("A multiplicação dos números (%d e %d) é: %d\n", num1, num2, num1 * num2);

    //Para evitar divisão por zero, verificamos se o segundo número é igual a zero antes de realizar a operação de divisão.
    if(num2 == 0){
        printf("Não é possível dividir o número por zero.\n");
    }else{
        div = (float)num1/num2;
        printf("A divisão dos números (%d e %d) é: %.2f\n", num1, num2, div);
    }
    system("PAUSE");
    return 0;
}