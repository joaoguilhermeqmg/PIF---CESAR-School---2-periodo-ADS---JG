#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){

SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

int dias;
double bruto, gratificacao, imposto, liquido;

printf("Digite o número de dias trabalhados: ");
scanf("%d", &dias);

bruto = dias * 45.0;
gratificacao = bruto * 0.05;
imposto = bruto * 0.08;
liquido = bruto + gratificacao - imposto;

printf("\n--- HOLERITE ---\n");
printf("Salário Bruto: R$ %.2lf\n", bruto);
printf("Gratificação (5%%): R$ %.2lf\n", gratificacao);
printf("Imposto IR (8%%): R$ %.2lf\n", imposto);
printf("Salário Líquido: R$ %.2lf\n", liquido);

system("PAUSE");
return 0;
}
