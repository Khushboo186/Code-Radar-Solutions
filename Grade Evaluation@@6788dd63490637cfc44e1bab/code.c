#include<stdio.h>
int main() {
    char (A, B, C, D, E, F);
    scanf("%c %c %c %c %c %c", &A, &B, &C, &D, &E, &F);
    if(char == A){
        printf("Excellent");
    }
    else if(char == B){
        printf("Good");
    }
    else if (char == C) {
        printf("Average");
    }
    else if(char == D) {
        printf("Below");
    }
    else if(char == E){
        printf("Average");
    }
    else if(char == F){
        printf("Fail");
    }
    else {
        printf("Invalid grade");
    }
}