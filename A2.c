//Division using functions

#include <stdio.h>
int divide(int a, int b){
    return a/b;
}

int main (){
    int x = 4;
    int y = 2;
    int quotient = divide(x,y);
    printf("The quotient of %d and %d is %d\n", x, y, quotient);
    return 0;
}