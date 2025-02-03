#include <stdio.h

int main() {
    float r;
    const float pi = 3.14;
    
    scanf("%f", &r);
    printf("Area: %.2f\n", pi * r * r );

    return 0;
}