import math
a: int; b: int; c: int; menor: int
a = int(input("Primeiro valor: "))
b = int(input("Segundo valor: "))
c = int(input("Terceiro valor: "))
if a < b and a < c:
    menor = a
elif b < c:
    menor = b
else:
    menor = c
print(f"O menor valor entre os três valores é {menor:.1f} ")