Questão 01
- a) Escrever if (x = 0) faz uma atribuição, não uma comparação. O x passa a valer 0 e o resultado da expressão também é 0, que é falso. Então o bloco do if não executa (se tiver else, é o else que roda).
- b) O C considera 0 como falso e qualquer valor diferente de 0 como verdadeiro (isso vale para inteiro e real, positivo ou negativo).
- c) O bloco será executado. O x recebe -5, e como -5 é diferente de 0, a condição é verdadeira (no ANSI C só o zero é falso).



Questão 02
- a) Será impressa a "Opção B". O x > 10 é verdadeiro e o y > 10 é falso, e o else pertence ao if de dentro (y > 10), por isso ele é executado.
- b) O else sempre se liga ao if mais próximo que ainda não tem else.
- c) Código com chaves:

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}



Questão 03
- a) Primeiro ele testa se media >= 7.0. Se for verdadeiro, situacao recebe 'A', se for falso recebe 'R'. Com media = 6.8 a condição é falsa, então situacao = 'R'.
- b) Com if-else:

media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

- c) Não, nem sempre. O ternário só devolve um valor e aceita uma expressão em cada lado, então não serve quando precisa executar vários comandos dentro do bloco. Nesses casos precisa usar o if-else.



Questão 04
- a) A saída é:

Prata
Ouro

Imprimiu mais de uma vez porque o case 2 não tem break, então o programa continua e executa o case 3 também, até achar o break.
- b) O break serve para sair do switch. Quando ele é esquecido acontece o fall-through (a execução "cai" para os próximos cases).
- c) Pode usar int, char e outros tipos inteiros (como enum). Não pode usar float nem double, porque o switch compara com valores inteiros constantes e números reais não são exatos.



Questão 05
- a) A saída é a = 0, b = 5, c = 8. Como a != 0 é falso, o ++b foi ignorado e caiu no else (c = 10 - 2).
- b) No && se o primeiro lado for falso, o segundo nem é avaliado, pois o resultado já é falso. No || se o primeiro lado for verdadeiro, o segundo nem é avaliado, pois o resultado já é verdadeiro.
- c) Com a == 0 || ++b > 5, o a == 0 é verdadeiro, então o ++b não executa. O b continua 5 e o c vira 20 (entra no if, c += 10).



Questão 06
- a) Para idade = 65 imprime Idoso, Adulto e Jovem. Isso acontece porque são if separados, então cada um é testado sozinho e os três são verdadeiros.
- b) Nos if independentes todas as condições são testadas, e várias podem executar. Na cadeia else-if, quando uma condição é verdadeira ela executa e as outras são ignoradas.
- c) Código com else-if:

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}

