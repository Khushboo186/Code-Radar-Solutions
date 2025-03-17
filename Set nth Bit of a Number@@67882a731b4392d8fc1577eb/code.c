#include <stdio.h>
void setNthbit(int *num, int n) {
    *num = *num | (1 << n);
}
int main() {
    int num, n;

    scanf("%d %d", &num, &n);
    

    setNthbit(&num, n);
    printf("%d\n",   num);

    return 0;
}
