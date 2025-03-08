#include<stdio.h>
int main() {
    int num, n, bit;
    scanf("%d", &num);
    printf("Enter the bit position (0 - 31): ");
    scanf("%d", &n);
    bit = (num >> n) & 1;
    printf("%d\n", bit);
    return 0;
}