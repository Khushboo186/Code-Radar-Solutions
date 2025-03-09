#include<stdio.h>
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
    int a = 3, b = 5;
    printf( "%d\n", a, b);

    swap(&a, &b);

    printf(" %d\n", a, b);
    return 0;
}