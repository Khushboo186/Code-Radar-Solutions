#include<stdio.h>
int main() {
    int num, result;
    printf("Enter an integer: ");
    scanf("%d", num);
    result = ~num;
    printf("The one's complement of %d is %d\n", num, result);
    return 0;
}