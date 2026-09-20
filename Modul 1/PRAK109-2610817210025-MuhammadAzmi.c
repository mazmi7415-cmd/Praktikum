#include <stdio.h>

int main(){
    float YuzhongArmy = 958730;
    float TotalHeroes = 5;
    float HeroesVSArmy = YuzhongArmy / TotalHeroes;
    
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", YuzhongArmy);
    printf("Jumlah pahlawan = %d\n", TotalHeroes);
    printf("Jumlah pasukan yang harus dilumpuhkan setiap pahlawan adalah %d pasukan\n", HeroesVSArmy);
    return 0;
}