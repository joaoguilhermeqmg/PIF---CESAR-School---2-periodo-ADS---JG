#include <stdio.h>

int main(){
    int tempototal;
    int horas, minutos, segundos;

    printf("Insira o tempo total em segundos: ");
    scanf("%d", &tempototal);

    horas = tempototal / 3600;

    int resto = tempototal % 3600;

    minutos = resto / 60;

    segundos = resto % 60;

    printf("%d segundos correspondem a %d horas, %d minutos e %d segundos  \n", 
            tempototal, horas, minutos, segundos);
    return 0;
}
