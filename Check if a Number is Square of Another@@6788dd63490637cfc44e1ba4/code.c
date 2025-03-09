#include <stdio.h>
#include <stdbool.h>

bool isSquare(int num1, int num2) {
    return num1 == num2 * num2;
}
int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (isSquare(num1, num2)) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}
