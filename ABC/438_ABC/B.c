#include <stdio.h>

int arrayMin(int *a, int n) {
  int min = a[0];
  for (int i = 0; i < n; i++) {
    if (min > a[i]) {
      min = a[i];
    }
  }
  return min;
}

int main(void) {
  int n, m;
  int answer[128];
  int buffer = 0;
  for (int i = 0; i < 128; i++)
    answer[i] = 0;
  scanf("%d%d", &n, &m);
  char s[n], t[m];
  scanf("%s", s);
  scanf("%s", t);
  for (int i = 0; i <= n - m; i++) {
    for (int j = 0; j < m; j++) {
      buffer = s[i + j] - t[j];
      if (buffer < 0) {
        buffer += 10;
      }
      answer[i] += buffer;
    }
  }
  printf("%d", arrayMin(answer, n - m + 1));
  return 0;
}
