#include <stdio.h>
int fibonacci (int n){
    if(n<=1){
        return n;
    } else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int n, b;
    printf("Enter the series number number: ");
    scanf("%d", &b);
    n = b-1;
    int fab = fibonacci(n);
    printf("The fibonacci of %d is %d", n, fab);
    return 0;
}