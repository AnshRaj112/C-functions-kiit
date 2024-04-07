#include <stdio.h>

void isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPalindrome(num);
    return 0;
}