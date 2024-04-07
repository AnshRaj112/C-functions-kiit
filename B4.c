#include <stdio.h>

int count_zeros(int n) {
  int count = 0;
  while (n > 0) {
    if (n % 10 == 0) {
      count++;
    }
    n /= 10;
  }
  return count;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The number of zeros in %d is %d\n", n, count_zeros(n));
  return 0;
}