#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float s_base;

    printf("Insira o salário base do funcionario: ");
    scanf("%f", &s_base);

    /* 
    Gratificação = s_base * (5 / 100.0)
    Imposto = s_base * (7 / 100.0)
    Salário Líquido = s_base + gratificação - imposto
    */

    float gratificacao = s_base * (5 / 100.0);
    float imposto = s_base * (7 / 100.0);
    float s_liq = s_base + gratificacao - imposto;

    printf("Salário líquido final: R$ %.2f\n", s_liq);

    system("PAUSE");
    return 0;
}