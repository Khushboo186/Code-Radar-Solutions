# include<stdio.h>
int main () {
    float side1, side2, side3;
    scanf("%f %f %f", &side1, &side2, &side3);
    if((side1 + side2 > side3) && (side2 + side3 > side1) && (side3 + side1 > side2)){
        printf("Valid\n");
    }else{
        printf("Invalid\n");
    }
}