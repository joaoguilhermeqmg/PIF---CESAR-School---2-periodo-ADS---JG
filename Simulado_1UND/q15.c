#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

int n, i, j, num = 1;

printf("Digite o número de linhas: ");
scanf("%d", &n);

for (i = 1; i <= n; i++) {
for (j = 1; j <= i; j++) {

printf("%d ", num);
num++;
}
printf("\n");
}
system("PAUSE");
return 0;
}
