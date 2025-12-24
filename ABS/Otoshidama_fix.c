#include <stdio.h>

int main(void) {
  int n = 0;
  int Y = 0;
  int sum = 0;
  int z = 0;
  scanf("%d%d", &n, &Y);

  for (int y = 0; y <= n; y++) {
    for (int x = 0; x <= n - y; x++) {
      z = n - x - y;
      sum = 10000 * x + 5000 * y + 1000 * z;
      if (sum == Y && x + y + z == n) {
        printf("%d %d %d", x, y, z);
        return 0;
      }
    }
  }
  int end = -1;
  printf("%d %d %d", end, end, end);
  return 0;
}
