#include<stdio.h>
void decimalToBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("Binary representation : ");
    decimalToBinary(num);
    return 0;
}