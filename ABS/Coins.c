#include <stdio.h>

int main(void) {
  int a, b, c;
  int x;
  int count = 0;
  int sum;
  scanf("%d%d%d%d", &a, &b, &c, &x);
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      for (int k = 0; k <= c; k++) {
        sum = 500 * i + 100 * j + 50 * k;
        if (sum == x) {
          count++;
        }
      }
    }
  }
  printf("%d", count);
  return 0;
}
