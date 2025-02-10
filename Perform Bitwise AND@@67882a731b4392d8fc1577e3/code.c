#include <stdio.h>


int main() {
    int num1, num2, result;
    scanf("%d %d", &num1, &num2);
    result = num1 & num2;
    printf("The result of %d & %d is %d\n", num1, num2, result);
    return 0;
}