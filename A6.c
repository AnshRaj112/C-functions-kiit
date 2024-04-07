//Checking Prime using functions

#include <stdio.h>
int PRIME (int n){
    int i;
    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n <=1)
    printf("%d is not a prime number\n", n);
    else if (PRIME(n)==1)
    printf("%d is a prime number\n", n);
    else
    printf("%d is not a prime number\n", n);
}