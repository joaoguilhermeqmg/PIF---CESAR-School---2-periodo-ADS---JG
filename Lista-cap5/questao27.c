#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsiusParaFahrenheit(float c);
float celsiusParaKelvin(float c);
float fahrenheitParaCelsius(float f);
float kelvinParaCelsius(float k);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float temp;

    printf("Conversor de temperatura\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opção inválida!\n");
    } else {
        printf("Digite a temperatura: ");
        scanf("%f", &temp);

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f °F\n", celsiusParaFahrenheit(temp));
                break;
            case 2:
                printf("Resultado: %.2f K\n", celsiusParaKelvin(temp));
                break;
            case 3:
                printf("Resultado: %.2f °C\n", fahrenheitParaCelsius(temp));
                break;
            case 4:
                printf("Resultado: %.2f °C\n", kelvinParaCelsius(temp));
                break;
        }
    }

    system("PAUSE");
    return 0;
}

float celsiusParaFahrenheit(float c){
    return c * 1.8 + 32;
}

float celsiusParaKelvin(float c){
    return c + 273.15;
}

float fahrenheitParaCelsius(float f){
    return (f - 32) / 1.8;
}

float kelvinParaCelsius(float k){
    return k - 273.15;
}
