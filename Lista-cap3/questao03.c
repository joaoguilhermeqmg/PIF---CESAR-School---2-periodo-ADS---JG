/*
a) O valor de a começa em 36 e é dividido por 2 a cada volta, até chegar em 0.
A sequência impressa é: 36 18 9 4 2 1


b) O Trecho B lê um caractere do teclado com getch() e guarda em ch, depois compara com 'X'.
Enquanto não for 'X', ele imprime o próprio caractere + 1, ou seja, o próximo caractere da tabela ASCII.
Quando o usuário digita 'X', o laço termina. 
Os parênteses em(ch = getch()) são necessários porque o operador != tem precedência maior que o =. Sem eles, o C compararia getch() com 'X' primeiro e guardaria o resultado na variável ch, o que daria errado.


c) Usando o comando break dentro do laço, normalmente dentro de um if (por exemplo, if (condicao) break;).
*/