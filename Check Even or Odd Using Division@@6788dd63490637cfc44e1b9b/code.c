#include<stdio.h>
int main() {
    int  a, num;
    scanf("%d ",  &a, &num);
    if((a / 2) * 2 == a) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}