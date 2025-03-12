#include<stdio.h>
void printMirrorRightAngledTriangle(int  N) {
    for(int i  = 1; i<= N; i++) {
        for(int j = i; j < N; j++){
            printf("  ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int N;
    SCANF("%D", &N);
    printMirrorRightAngledTriangle(N);
    return 0;

}