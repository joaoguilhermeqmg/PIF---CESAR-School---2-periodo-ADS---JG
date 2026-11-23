#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsius(float fahr);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);

    printf("Temperatura em Celsius: %.2f\n", c);

    system("PAUSE");
    return 0;
}

float celsius(float fahr){
    return (fahr - 32) * 5 / 9;
}
