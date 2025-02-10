#include <stdio.h>

int main() {
    int N, i, j;
    printf("%Enter the side  length of square:  ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}