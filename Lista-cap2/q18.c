#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const float pi = 3.141593;
    float raio,area,vol;

    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    vol = (4.0 / 3.0) * pi * raio * raio * raio;
    area = 4 * pi * raio * raio;

    printf("O Volume da esfera é: %.2f\n", vol);
    printf("A área da esfera é: %.2f\n", area);

    system("PAUSE");
    return 0;
}