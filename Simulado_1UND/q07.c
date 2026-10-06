#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    const double PI = 3.14159265;
    double raio, area, volume;
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);
    area = 4 * PI * pow(raio, 2);
    volume = (4.0 / 3.0) * PI * pow(raio, 3);
    printf("Área da superfície: %.3lf\n", area);
    printf("Volume da esfera: %.3lf\n", volume);
    system("PAUSE");
    return 0;
}
