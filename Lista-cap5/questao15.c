#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota (peso 5): ");
    scanf("%f", &nota3);

    media = mediaPonderada(nota1, nota2, nota3);

    printf("Média ponderada: %.2f\n", media);
    exibeSituacao(media);

    system("PAUSE");
    return 0;
}

float mediaPonderada(float n1, float n2, float n3){
    return (n1 * 2 + n2 * 3 + n3 * 5) / 10;
}

void exibeSituacao(float media){
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) {
        printf("Em Recuperação\n");
    } else {
        printf("Reprovado\n");
    }
}
