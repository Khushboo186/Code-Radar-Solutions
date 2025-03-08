#include <stdio.h>
int main () {
    int num, shift, result;
    printf("Enter an intger: ");
    scanf("%d", &num);
    scanf("%d", &shift);
    result = num <<shift;
    printf("The result of left shifting %d by %d postions is: %d\n", num, shift, result);
    return 0;
}