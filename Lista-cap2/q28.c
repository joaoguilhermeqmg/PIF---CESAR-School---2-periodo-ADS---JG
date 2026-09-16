#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int h_normais,h_extras;

    printf("Insira o total de horas normais trabalhadas no ano: ");
    scanf("%d", &h_normais);
    printf("Insira o total de horas extras trabalhadas no ano: ");
    scanf("%d", &h_extras);

    float salario_bruto = (h_normais * 10.0) + (h_extras * 15.0);

    float excedente = (salario_bruto > 12000.0) ? (salario_bruto - 12000.0) : 0.0;
    float imposto = excedente * (10.0/100.0);

    printf("Salário anual bruto: R$ %.2f\n", salario_bruto);
    printf("Imposto retido: R$ %.2f\n", imposto);

    system("PAUSE");
    return 0;
}