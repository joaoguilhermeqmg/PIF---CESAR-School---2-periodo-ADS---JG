#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

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
                printf("Resultado: %.2f °F\n", temp * 1.8 + 32);
                break;
            case 2:
                printf("Resultado: %.2f K\n", temp + 273.15);
                break;
            case 3:
                printf("Resultado: %.2f °C\n", (temp - 32) / 1.8);
                break;
            case 4:
                printf("Resultado: %.2f °C\n", temp - 273.15);
                break;
        }
    }

    system("PAUSE");
    return 0;
}
