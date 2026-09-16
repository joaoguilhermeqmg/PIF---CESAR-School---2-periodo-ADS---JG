#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int dias;
    float salario_bruto,salario_liquido;

    printf("Número de dias trabalhados: ");
    scanf("%d", &dias);

    salario_bruto = dias * 30;

    float desconto_salario = salario_bruto * (8 / 100.0);

    salario_liquido = salario_bruto - desconto_salario;

    printf("Salário bruto: R$%.2f\n", salario_bruto);
    printf("Salário líquido: R$%.2f\n", salario_liquido);
    printf("Valor descontado: R$%.2f\n", desconto_salario);

    system("PAUSE");
    return 0;
}