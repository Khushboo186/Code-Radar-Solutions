#include <stdio.h>
unsigned int flipBits(unsigned int num) {
    return ~num;
}
int main() {
    unsigned int num;
    scanf("%u", &num);
    unsigned int flippedNum = flipBits(num);
    printf("%u\n", flippedNum);
    // printf("%u\n", flipBits);
    return 0;
}
