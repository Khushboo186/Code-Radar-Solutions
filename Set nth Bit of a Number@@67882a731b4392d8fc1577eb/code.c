#include <stdio.h>
void setNthbit(int *num, int n) {
    *num = *num | (1 << n);
}
int main() {
    int num, n;

    scanf("%d", &num);
    scanf("%d", &n);

    setNthbit(&num, n);
    printf(" %d\n", n,  num);

    return 0;
}
