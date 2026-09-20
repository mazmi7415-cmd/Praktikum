#include <stdio.h>

int main(){
    float Laps = 5;
    float Distance = 14;
    float circumference = Distance / Laps;
    float radius = circumference / (2 * 3.14);
    
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", Laps);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", Distance);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", radius);
    return 0;
}