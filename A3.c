//Summation using functions

#include <stdio.h>
int sum(int a, int b){
    return a+b;
}

int main (){
    int x = 4;
    int y = 2;
    int addition = sum(x,y);
    printf("The sum of %d and %d is %d\n", x, y, addition);
    return 0;
}