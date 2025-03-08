#include<stdio.h>
int main() {
    int num, n, mask;
    scanf("%d", &num);
    scanf("%d", &n);
    mask = ~(1 << n);
    num = num & mask;
    printf("%d\n", num);
    return 0;
}