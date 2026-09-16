#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float km_h;

    printf("Insira a velocidade em km/h: ");
    scanf("%f", &km_h);

    float m_s = km_h / 3.6;
    printf("Velocidade em m/s: %.2f m/s\n", m_s);

    system("PAUSE");
    return 0;
}