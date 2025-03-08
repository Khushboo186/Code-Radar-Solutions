#include <stdio.h>
int main () {
    int num, shift, result;
    // printf("Enter an intger: ");
    scanf("%d", &num);
    // printf("Enter the number of positions to left shift:");
    scanf("%d", &shift);
    result = num <<shift;
    printf(" %d\n" , num, shift, result);
    return 0;
}