a) O operador prefixado (++n) faz o incremento antes da atribuição, já o operador pós-fixado (m++) utiliza o valor atual da variável na atribuição e só depois faz o incremento.
Valores impressos:
Trecho A -> Trecho A: n = 6, x = 6  
Trecho B -> Trecho B: m = 6, y = 5  



b) Isso acontece porque a linguagem C não especifica a ordem que a função vai ser avaliada, então o compilador pode escolher a ordem que ele quiser. Por isso, o resultado da expressão é indefinido e pode variar de compilador para compilador.