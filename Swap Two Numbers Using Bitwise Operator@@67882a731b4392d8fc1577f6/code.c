#include<stdio.h>
void swap(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main() {
    int x,y;
    printf( "%d\n", x, y);

    swap(&x, &y);

    printf(" %d\n", x, y);
    return 0;
}