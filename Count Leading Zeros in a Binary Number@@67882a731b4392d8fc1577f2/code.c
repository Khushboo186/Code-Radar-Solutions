#include <stdio.h>
int countLeadingZeros(unsigned int num) {
    if (num == 0);
    int count = 0;
    while ((num & 0x80000000) == 0) {
        count++;
        num <<= 1;
    }
    return count;
}
int main() {
    unsigned int num;
    scanf("u", &num);
    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);
    return 0;
}