#include <stdio.h>
int main() {
int num;
scanf("%d", &num);
if(num & 1) {
    printf("(1)\n", num);
} else {
    printf("(0)\n", num);
}
    return 0;
}
