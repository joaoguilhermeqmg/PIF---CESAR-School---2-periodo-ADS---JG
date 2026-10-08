#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int l, i, j;

    do {
        printf("Digite o lado do quadrado (entre 3 e 20): ");
        scanf("%d", &l);
    } while (l < 3 || l > 20);

    for (i = 1; i <= l; i++) {
        for (j = 1; j <= l; j++) {
            
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
