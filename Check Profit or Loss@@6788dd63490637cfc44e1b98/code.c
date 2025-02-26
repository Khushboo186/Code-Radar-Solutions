#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    if (num1 == 100 && num2 == 150) {
        printf("Profit");
    } elseif(num1 == 200 && num2 == 150) {
        printf("Loss");
    }
}