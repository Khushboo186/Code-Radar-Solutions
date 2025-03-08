#include<stdio.h>
void decimalToBinary(unsigned int num) {
    int leadingZero = 1;
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        if(bit == 1) {
            leadingZero = 0;
        }
        if (!leadingZero) {
            printf("%d", bit);
        }
    }
    if (leadingZero) {
        printf("0");
    }
    printf("\n");
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    
    decimalToBinary(num);
    return 0;
}