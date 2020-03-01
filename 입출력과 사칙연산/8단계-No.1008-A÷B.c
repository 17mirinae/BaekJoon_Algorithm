#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("%.9lf", (double)a / (double)b);
    
    return 0;
}
