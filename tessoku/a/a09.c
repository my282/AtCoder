#include <stdio.h>

int main(void) {
  // setup and input
  int h, w, n;
  scanf("%d%d%d", &h, &w, &n);
  int a[n], b[n], c[n], d[n];
  for (int i = 0; i < n; i++)
    scanf("%d%d%d%d", &a[i], &b[i], &c[i], &d[i]);
  int answer[h + 10][w + 10];
  for (int i = 0; i < h + 10; i++) {
    for (int j = 0; j < w + 10; j++) {
      answer[i][j] = 0;
    }
  }

  // calculate
  for (int i = 0; i < n; i++) {
    for (int j = a[i]; j <= c[i]; j++) {
      answer[j][b[i]] += 1;
    }

    for (int j = a[i]; j <= c[i]; j++) {
      answer[j][d[i] + 1] -= 1;
    }
  }

  // answer
  int answer_buffer = 0;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      answer[i][j] += answer[i][j - 1];
      printf("%d ", answer[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
