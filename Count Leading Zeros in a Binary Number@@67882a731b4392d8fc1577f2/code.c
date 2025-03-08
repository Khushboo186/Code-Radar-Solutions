#include <stdio.h>
int countLeadingZeros(unsigned int num) {
    int count = 0;
    unsigned int mask = 1 << 31;
    while (mask > 0 && (num & mask) == 0) {
        count++;
        mask >>= 1;
    }
    return count;
}
int main() {
    unsigned int num = 0x00FF;
    int leadingZeros = countLeadingZeros(num);

    printf("%d\n", leadingZeros);
    return 0;
}