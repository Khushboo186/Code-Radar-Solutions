#include <stdio.h>
int main () {
    int num, shift, result;
    printf("Enter an intger: ");
    scanf("%d", &num);
    scanf("%d", &shift);
    result = num <<shift;
    printf( num, shift, result);
    return 0;
}