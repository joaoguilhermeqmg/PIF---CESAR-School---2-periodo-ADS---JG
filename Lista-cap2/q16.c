#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int degraus;
    float alt_degraus,alt_total;

    printf("Insira a altura de cada degrau (em centímetros): ");
    scanf("%f", &alt_degraus);
    printf("Insira a altura total (em metros): ");
    scanf("%f", &alt_total);
    alt_total = alt_total * 100;
    degraus = alt_total / alt_degraus;

    if(alt_total > degraus * alt_degraus){
        degraus++;
    }
    printf("O número mínimo de degraus é: %d\n",degraus);

    system("PAUSE");
    return 0;
}