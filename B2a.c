#include <stdio.h>
float sum(float a, float b){
    return a+b;
}

float difference(float a, float b){
    return a-b;
}

float multiply(float a, float b){
    return a*b;
}

float divide(float a, float b){
    return a/b;
}

int main(){
    float a, b;
    int choice;
    printf("Enter the numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter the choice\n");
    printf("1. Add\n");
    printf("2. Subtraction\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    scanf("%d", &choice);
    float Sum = sum(a,b);
    float Difference = difference(a,b);
    float Product = multiply(a,b);
    float Divide = divide(a,b);
    switch (choice)
    {
    case 1/* constant-expression */:
        printf("The Sum of %f and %f is %f\n", a, b, Sum);
        break;
    
    case 2:
        printf("The Difference of %f and %f is %f\n", a, b, Difference);
        break;
    
    case 3:
        printf("The Produce of %f and %f is %f\n", a, b, Product);
        break;
    
    case 4:
        printf("The Quotient of %f and %f is %f\n", a, b, Divide);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}