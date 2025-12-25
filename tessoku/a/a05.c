#include <stdio.h>

int main(void) {
  int n, k;
  int a, b, c;
  int answer = 0;
  scanf("%d%d", &n, &k);
  for (a = 1; a <= n; a++) {
    for (b = 1; b <= n; b++) {
      c = k - a - b;
      if (1 <= c && c <= n)
        answer++;
    }
  }
  printf("%d", answer);
  return 0;
}
