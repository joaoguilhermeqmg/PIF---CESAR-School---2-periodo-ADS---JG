Questão 01  
a) O protótipo é float celsius(float); (antes da main), a chamada é c = celsius(f); (dentro da main) e a definição é o bloco float celsius(float fahr) { ... } (depois da main). O protótipo avisa o compilador que a função existe, a chamada executa a função com um valor, e a definição é onde fica o código que a função realmente faz.  
b) O protótipo informa ao compilador o nome da função, o tipo de retorno e os tipos dos parâmetros, para ele conferir se a chamada está certa. Sem o protótipo e com a função depois da main, o compilador não conseguiria verificar os parâmetros na chamada, e poderia dar erro ou aceitar uma chamada errada.  
c) O tipo da função é float. O tipo é definido pelo valor que ela retorna, porque é esse valor que vai ser usado no lugar da chamada (como no c = celsius(f)). Os parâmetros só são a entrada da função.

Questão 02  
a) O return devolve só um valor. O programador queria devolver a soma e a média ao mesmo tempo, mas o return soma, media; não faz isso: só o último valor (a média) é devolvido e a soma é perdida.  
b) O return; encerra a função na hora, então se erro for menor que 0 ela sai sem imprimir o "Codigo processado". Não é obrigatório no final de uma função void, porque ela termina sozinha quando chega na última linha.  
c) Código:  
int media(int a, int b, int c) {  
    int soma = a + b + c;  
    return soma / 3;  
}  
int soma(int a, int b, int c) {  
    return a + b + c;  
}  
Precisamos de duas funções porque o return só consegue devolver um valor por vez.

Questão 03  
a) exibe_mensagem recebe um parâmetro (um texto) e não retorna nada. obter_codigo não recebe parâmetro e retorna um int. limpar_tela não recebe parâmetro e não retorna nada.  
b) A função com retorno devolve um valor que pode ser usado depois (ex.: uma função que calcula a soma de dois números). O procedimento (void) só executa uma ação e não devolve nada (ex.: uma função que só imprime um menu).  
c) Não é válida. A função é void, ou seja, não devolve nenhum valor, então não tem nada para guardar no x.

Questão 04  
a) O caso base é n == 0 (retorna 1) e o passo recursivo é n vezes fatorial(n - 1). Se tirar o caso base a função nunca para de chamar ela mesma.  
b) Empilhando: fatorial(4) chama fatorial(3), que chama fatorial(2), que chama fatorial(1), que chama fatorial(0). Desempilhando: fatorial(0) devolve 1, fatorial(1) devolve 1 x 1 = 1, fatorial(2) devolve 2 x 1 = 2, fatorial(3) devolve 3 x 2 = 6 e fatorial(4) devolve 4 x 6 = 24.  
c) A cada chamada é criado um espaço novo na pilha com o valor de n daquela chamada, e ele só sai da pilha quando a chamada termina. Sem caso base as chamadas continuam sendo empilhadas até a pilha ficar cheia e o programa travar.

Questão 05  
a) O SQR(2+3) imprime 25, porque vira (2+3) vezes (2+3), com os parênteses. O DOBRO(2+3) imprime 8, porque vira 2+3*2 (multiplica o 3 por 2 primeiro). A diferença é que o SQR tem parênteses de proteção e o DOBRO não.  
b) Porque o define não é um comando da linguagem C, é uma diretiva do pré-processador, e se colocar ponto e vírgula ele vira parte da substituição. Usamos maiúsculas por convenção, para ficar fácil de diferenciar das variáveis.  
c) Está incorreto por causa do espaço entre PRN e (n): o pré-processador entende que PRN é uma constante. O certo é #define PRN(n) printf("%d", n). A macro é só uma substituição de texto feita antes de compilar e não tem tipo, já a função é chamada na execução do programa e confere os tipos dos parâmetros.

Questão 06  
a) O #include <stdio.h> usa os sinais de menor e maior e serve para bibliotecas do próprio compilador. O #include "areas.h" usa aspas e serve para arquivos criados por nós, que ficam na pasta do projeto.  
b) O #undef SOMA apaga a definição da macro, então depois dele o SOMA não existe mais. A forma #undef SOMA(x,y) está errada porque o #undef só aceita o nome da macro, sem os parâmetros.  
c) Será impresso "Modo normal". Essa decisão é tomada no pré-processamento (antes de compilar), e as diretivas não aparecem no executável porque o pré-processador já resolve elas e só o código C resultante é compilado.
