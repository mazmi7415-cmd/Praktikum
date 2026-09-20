#include <stdio.h>
#include <math.h>

int main() {
    int Base = 5;
    int Height = 12;
    int Hypotenuse = (int)round(sqrt(pow(Base, 2) + pow(Height, 2)));
    int Perimeter = Base + Hypotenuse + Height;
    int Area = (Base * Height) / 2;
    
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", Base);
    printf("Tinggi = %d cm\n\n", Height);
    printf("Jawaban :\n");
    printf("Sisi A = %d cm\n", Base);
    printf("Sisi B = %d cm\n", Hypotenuse);
    printf("Sisi C = %d cm\n", Height);
    printf("Keliling = %d cm\n", Perimeter);
    printf("Luas = %d cm\n", Area); 
    return 0;
}