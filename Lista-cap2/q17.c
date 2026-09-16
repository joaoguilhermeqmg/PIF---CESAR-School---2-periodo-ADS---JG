#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float raio,area,circunferencia,quadrado_num;
    const float pi = 3.141593;

    printf("Insira o raio do círculo: ");
    scanf("%f", &raio);
    
    quadrado_num = raio * raio;
    area = pi * quadrado_num;
    circunferencia = 2 * pi * raio;

    printf("Área: %.2f\n", area);
    printf("Circunferência: %.2f\n", circunferencia);

    system("PAUSE");
    return 0;
}