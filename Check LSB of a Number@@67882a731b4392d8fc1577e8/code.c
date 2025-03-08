#include <stdio.h>
int main() {
int num;
scanf("%d", &num);
if(num & 1) {
    printf("Set", num);
} else {
    printf(" Not set", num);
}
    return 0;
}
