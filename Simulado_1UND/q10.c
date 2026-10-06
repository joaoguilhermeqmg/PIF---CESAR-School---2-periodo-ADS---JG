#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int segundos, horas, minutos, resto;
    
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    resto = resto % 60;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)\n", horas, minutos, resto);

    system("PAUSE");
    return 0;
}
