# include<stdio.h>
int main () {
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch == 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    } else if (0 <ch< 1000)
        printf("Digit");
        else {
            printf("Consonant");
        }
    }
