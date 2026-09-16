Valores iniciais -> a = 1, b = 2, c = 3, d = 4

a += b + c -> Valor final a = 6. Ele calcula b + c = 5 e depois soma com a = 1.
a = 6, b = 2, c = 3, d = 4


b *= c = d + 2 -> Valores finais b = 12, c = 6. Ele calcula d + 2 = 6, iguala c = 6 e depois multiplica b = 2 * c = 6 e atribui o resultado a b = 12.
a = 6, b = 12, c = 6, d = 4


d %= a + a + a -> Valor final d = 4. Ele calcula a + a + a = 18, depois calcula d % 18 = 4.
a = 6, b = 12, c = 6, d = 4


d -= c -= b -= a -> Valores finais d = 4, c = 0 e b = 6. Ele calcula b -= a -> 12 - 6 = 6, depois c -= b -> 6 - 6 = 0 e depois d -= c -> 4 - 0 = 4.
a = 6, b = 6, c = 0, d = 4


a += b += c += 7 -> Valores finais a = 19, b = 13 e c = 7. Ele calcula c += 7 -> 0 + 7 = 7, depois b += c -> 6 + 7 = 13 e depois a += b -> 6 + 13 = 19.
a = 19, b = 13, c = 7, d = 4


Valores finais -> a = 19, b = 13, c = 7, d = 4