/*ERROS DO CÓDIGO:
Colocou ";" na linha da biblioteca stdlib.h 
O "main" ta escrito com letra maiúscula
Colocou parenteses em vez de chaves na função "main"
A linha (cout << endl;) não existe na linguagem C
*/



//CÓDIGO CORRETO:
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("Existem %d semanas no ano\n", 52);

    system("PAUSE");

    return 0;
}
