#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    if (num1 == 100 && num2 == 150) {
        printf("Profit");
    } else if(num1 == 200 && num2 == 150) {
        printf("Loss");
    }
        else {
            printf("No Profit No LOss");
        }
    }