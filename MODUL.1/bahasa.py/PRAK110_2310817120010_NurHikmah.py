import math

C = 5
A = 12
B = int(math.sqrt(A ** 2 + C ** 2))
K = A + B + C
L = int(1 / 2 * C * A)

print(f"Diketahui : \nAlas = {C} cm\nTinggi = {A} cm\n")
print(f"Jawab : \nSisi A = {A} cm\nSisi B = {B} cm\nSisi C = {C} cm")
print(f"Keliling = {K} cm\nLuas = {L} cm²")
