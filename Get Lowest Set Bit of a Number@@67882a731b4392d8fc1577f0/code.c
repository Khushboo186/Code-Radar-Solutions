#include <stdio.h>
int main() {
    int num, position = 0;
    scanf("%d", &num);
    while (!(num & 1)) {
        num >> =1;
        position++;
    }
    printf("%d\n", position);
    return 0;
    
}