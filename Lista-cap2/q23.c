#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int total_segundos;
    int hora,minuto,segundos,duracao;

    printf("Insira a hora inicial: ");
    scanf("%d", &hora);
    printf("Insira os minutos iniciais: ");
    scanf("%d", &minuto);
    printf("Insira os segundos iniciais: ");
    scanf("%d", &segundos);
    printf("Insira a duração em segundos do experimento: ");
    scanf("%d", &duracao);

    total_segundos = (hora * 3600) + (minuto * 60) + segundos;
    total_segundos = total_segundos + duracao;

    hora = (total_segundos / 3600) % 24;
    minuto = (total_segundos % 3600) / 60;
    segundos = total_segundos % 60;

    printf("Horário que o experimento terminou: %02d:%02d:%02d\n", hora, minuto, segundos);

    system("PAUSE");
    return 0;
}