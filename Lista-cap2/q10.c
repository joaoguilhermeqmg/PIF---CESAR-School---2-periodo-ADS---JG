#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float kelvin,fahrenheit,celsius;

    printf("Insira uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    printf("Fahrenheit: %.2f\n", fahrenheit);
    printf("Kelvin: %.2f\n", kelvin);

    system("PAUSE");
    return 0;
}