#include<stdio.h>
int main() {
    int  a, num;
    scanf("%d ",  &a, &num);
    if((a / 2) * 2 == num) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}