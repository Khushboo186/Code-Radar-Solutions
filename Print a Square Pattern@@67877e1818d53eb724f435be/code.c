#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Enter the side length of the square: %* \n");
        }
        printf("\n");
    }
    return 0;
}