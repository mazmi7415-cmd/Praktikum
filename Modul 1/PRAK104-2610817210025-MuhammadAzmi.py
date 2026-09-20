PriceA = 400000
PriceB = 350000
DiscountA = 0.13
DiscountB = 0.21
TotalA = int(PriceA - (PriceA * DiscountA))
TotalB = int(PriceB - (PriceB * DiscountB))
print(f"Harga sepatu A adalah {PriceA}")
print(f"Harga sepatu B adalah {PriceB}")
print(f"Sepatu A mendapat diskon 13% sehingga harganya menjadi {TotalA}")
print(f"Sepatu B mendapat diskon 21% sehingga harganya menjadi {TotalB}")