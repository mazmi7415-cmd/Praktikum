import math
Base = 5
Height = 12
Hypotenuse = int(math.sqrt(Base**2 + Height**2))

Perimeter = Base + Hypotenuse + Height
Area = int((Base * Height) / 2)

print("Diketahui :")
print(f"Alas = {Base} cm")
print(f"Tinggi = {Height} cm\n")
print("Jawaban :")
print(f"Sisi A = {Base} cm")
print(f"Sisi B = {Hypotenuse} cm")
print(f"Sisi C = {Height} cm")
print(f"Keliling = {Perimeter} cm")
print(f"Luas = {Area} cm")