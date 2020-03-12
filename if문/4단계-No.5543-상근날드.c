#include <stdio.h>

int main(void) {
    int high, middle, low, burger;
    int coke, soda, drink;
    
    scanf("%d", &high);
    scanf("%d", &middle);
    scanf("%d", &low);
    
    scanf("%d", &coke);
    scanf("%d", &soda);
    
    if(high <= middle) {
        burger = high;
    } else {
        burger = middle;
    }
    
    if(burger > low) {
        burger = low;
    }
    
    if(coke <= soda) {
        drink = coke;
    } else {
        drink = soda;
    }
    
    printf("%d", burger + drink - 50);
    
    return 0;
}
