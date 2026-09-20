#include <stdio.h>

int main(){
   int Side1 = 4;
   int Side2 = 5;
   int Side3 = 7;
   int Perimeter = Side1 + Side2 + Side3;
   int Price = 85000;
   printf("Diketahui :\n");
   printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", Side1, Side2, Side3);
   printf("Keliling Tanah Pak Dengklek adalah %d\n", Perimeter);
   printf("Harga tanah Per Meter adalah %d\n", Price);
   printf("Jawaban :\n");
   printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", Perimeter * Price);
   return 0;
}