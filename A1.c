//Multiple using functions

#include <stdio.h>
int multiple(int a, int b){
    return a*b;
}

int main (){
    int x = 5;
    int y = 6;
    int product = multiple(x,y); //x*y
    printf("The product of %d and %d is %d\n", x, y, product);
    return 0;
}