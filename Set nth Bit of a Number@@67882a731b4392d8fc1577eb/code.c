#include <stdio.h>
void setNthbit(int *num, int n) {
    *num = *num | (1 << n);
}
int main() {
    int num, n;

    printf("Enter a number:");
    scanf("%d", &num);

    printf("Enter the bit position to set (0 - based): ");
    scanf("%d", &n);

    setNthbit(&num, n);
    printf("The number after setting the %dth bit to 1 is: %d\n", n, num);

    return 0;
}
