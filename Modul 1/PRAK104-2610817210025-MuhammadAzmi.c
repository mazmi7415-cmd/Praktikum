#include <stdio.h>

int main() {
    float PriceA = 400000;
    float PriceB = 350000;
    float DiscountA = 0.13;
    float DiscountB = 0.21;
    int TotalA = (int)(PriceA - (PriceA * DiscountA));
    int TotalB = (int)(PriceB - (PriceB * DiscountB));

    printf("Harga sepatu A adalah %.0f\n", PriceA);
    printf("Harga sepatu B adalah %.0f\n", PriceB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", TotalA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", TotalB);
    return 0;
}