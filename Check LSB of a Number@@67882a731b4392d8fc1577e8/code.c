#include <stdio.h>
int main() {
int num;
scanf("%d", &num);
if(num & 1) {
    printf("set (1)\n", num);
} else {
    printf("set (0)", num);
}
    return 0;
}
