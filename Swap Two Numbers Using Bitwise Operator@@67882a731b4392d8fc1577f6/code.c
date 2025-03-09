#include<stdio.h>
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
    int a = 5, b = 3;
    printf( "%d", a, b);

    swap(&a, &b);

    printf(" %d", b, a);
    return 0;
}