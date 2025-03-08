#include<stdio.h>
int countTrailingZeros(unsigned int num) {
    if (num == 0) return 32;
    int count = 0;
    while((num & 1) == 0) {
        count++;
        num >>= 1;
    }
    return count;
}
int main() {
    unsigned int num;
    scanf("%u", &num);

    int trailingZeros = countTrailingZeros(num);
    printf("%d\n", trailingZeros);
    return 0;
}