#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float largura,comprimento,p_metro;

    printf("Insira o comprimento do terreno em metros: ");
    scanf("%f", &comprimento);
    printf("Insira a largura do terreno em metros: ");
    scanf("%f", &largura);
    printf("Insira o preço por metro do arame: ");
    scanf("%f", &p_metro);

    float perimetro = (comprimento + largura) * 2;
    float arame_total = perimetro * 3;
    float custo_total = arame_total * p_metro;
    printf("Total de arame necessário: %.2f m\n", arame_total);
    printf("Custo total: R$ %.2f\n", custo_total);

    system("PAUSE");
    return 0;
}