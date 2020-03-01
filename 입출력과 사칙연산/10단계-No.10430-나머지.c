#include <stdio.h>

int main(void) {
    int a, b, c, answer;
    
    scanf("%d %d %d", &a, &b, &c);
    
    answer = (a + b) % c;
    printf("%d\n", answer);
    printf("%d\n", answer%c);
    
    answer = (a * b) % c;
    printf("%d\n", answer);
    printf("%d\n", answer%c);

    return 0;
}
