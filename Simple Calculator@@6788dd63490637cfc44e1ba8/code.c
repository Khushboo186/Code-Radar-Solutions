#include<stdio.h>
int main() {
    int num1, num2, result;
    char op;
    scanf("%d %c %d", &num1, &op, &num2);
    switch (op) {
        case '+':
        result = num1 + num2;
        printf("%d\n", result);
        break;
        case '-':
        result = num1 - num2;
        printf("%d\n", result);
        break;
        case'*':
        result = num1 * num2;
        printf("%d\n", result);
        break;
        case'/':
        if(num2 != 0){
            result = num1 / num2;
            printf("%d\n", result);
        } else {
        printf("Error: Division by zero\n");
    }
    break;

    default:
    printf("Error: Invalid operator\n");
    }

    return 0;
}