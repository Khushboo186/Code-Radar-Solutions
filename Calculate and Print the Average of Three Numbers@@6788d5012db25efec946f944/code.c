#include <stdio.h>



int main() {
    int num1,num2,num3,Average;
    scanf("%d,%d,%d",&num1,&num2,&num3);
    Average = (num1 + num2 + num3)/3.0;
    printf(Average:"%.2f\n",Average);
    return 0;
}