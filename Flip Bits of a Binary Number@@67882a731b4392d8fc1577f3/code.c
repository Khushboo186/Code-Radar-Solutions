#include <stdio.h>

void printFlippedBinary(unsigned int num) {
    unsigned int flipped = ~num;

    // Print 32-bit binary of the flipped number
    for (int i = 31; i >= 0; i--) {
        printf("%d", (flipped >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned int num;

    // Input a single integer
    scanf("%u", &num);

    // Output the flipped binary
    printFlippedBinary(num);

    return 0;
}