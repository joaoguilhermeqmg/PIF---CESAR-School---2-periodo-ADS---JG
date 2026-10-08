/*
a) O valor final impresso é 6.


b) No x++ < 5, o C primeiro compara o valor atual de x com 5 e só depois incrementa x.
Passo a passo:
x = 0: 0 < 5 verdadeiro -> x vira 1
x = 1: 1 < 5 verdadeiro -> x vira 2
x = 2: 2 < 5 verdadeiro -> x vira 3
x = 3: 3 < 5 verdadeiro -> x vira 4
x = 4: 4 < 5 verdadeiro -> x vira 5
x = 5: 5 < 5 falso -> x vira 6 (incrementa mesmo assim)


c)
Versão explícita:

int x = 0;
while (x < 5) {
 x++;
}
x++;
printf("Valor final de x = %d\n", x);


*/