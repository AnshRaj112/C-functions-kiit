#include <stdio.h>
int PRIME (int n){
    int i, flag=0;
    for ( i = 2; i <= n/2; i++)
    {
        if (n%i==0){
            flag =1;
            break;
        }
    }
    return flag;
}

int main() {
    int n, i;
    printf("Prime number from 1 to 100 are: \n");
    for (n=2; n<=100; ++n){
        if(PRIME(n)==0){
            printf("%d\n", n);
        }
    }
    return 0;
}