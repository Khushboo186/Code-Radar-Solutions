# include <stdio.h>
int main () {
    int num;
    scanf("%d %d", &num);
    if(num % 5 && num % 11){
        printf("Divisible\n");
    }else {
        printf("Not Divisible\n");
    }
}