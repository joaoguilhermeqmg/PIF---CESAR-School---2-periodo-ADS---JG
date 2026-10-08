#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int celsius;
    float fahrenheit, kelvin;

    printf("Celsius\t\tFahrenheit\tKelvin\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5 + 32;
        kelvin = celsius + 273.15;
        printf("%7.2f\t\t%10.2f\t%7.2f\n", (float)celsius, fahrenheit, kelvin);
    }

    system("PAUSE");
    return 0;
}
