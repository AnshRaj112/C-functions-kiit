//WAP to convert all lowercase letters to uppercase letters in a string
#include <stdio.h>
#include <ctype.h>
void toupper_string(char *str){
    while (*str){
        *str = toupper(*str);
        str++;
    }
}

int main(){
    char str[] = "Hello World";
    toupper_string(str);
    printf("%s\n", str);
    return 0;
}