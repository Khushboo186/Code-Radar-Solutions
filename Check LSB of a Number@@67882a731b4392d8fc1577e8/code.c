#include <stdio.h>
int main() {
int num;
printf("Enter a number: ");
scanf("%d", &num);
if(num & 1) {
    printf("The last significant bit(LSB) of %d is set (1)\n", num);
} else {
    printf("The least significant bit(LSB) of %d is not set(0)", num);
}
    return 0;
}
