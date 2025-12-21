#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  int mul = a * b;
  if (mul % 2 == 0) {
    puts("Even");
  } else {
    puts("Odd");
  }
  return 0;
}
