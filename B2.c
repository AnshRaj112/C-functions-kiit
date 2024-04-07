// Calculator
#include <stdio.h>
int sum(int a, int b){
    return a+b;
}

int difference(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

int divide(int a, int b){
    return a/b;
}

int main(){
    int a, b, choice;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter the choice\n");
    printf("1. Add\n");
    printf("2. Substraction\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    scanf("%d", &choice);
    int Sum = sum(a,b);
    int Difference = difference(a,b);
    int Product = multiply(a,b);
    int Divide = divide(a,b);
    switch (choice)
    {
    case 1/* constant-expression */:
        printf("The Sum of %d and %d is %d\n", a, b, Sum);
        break;
    
    case 2:
        printf("The Difference of %d and %d is %d\n", a, b, Difference);
        break;
    
    case 3:
        printf("The Produce of %d and %d is %d\n", a, b, Product);
        break;
    
    case 4:
        printf("The Quotient of %d and %d is %d\n", a, b, Divide);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}