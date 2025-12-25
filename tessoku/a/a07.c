#include <stdio.h>

int main(void) {
  int d, n;
  int L, R;
  scanf("%d%d", &d, &n);
  int data[d + 2];
  for (int i = 0; i < d + 2; i++)
    data[i] = 0;
  // input
  for (int i = 1; i <= n; i++) {
    scanf("%d%d", &L, &R);
    data[L]++;
    data[R + 1]--;
  }
  // answer
  int answer = 0;
  for (int i = 1; i <= d; i++) {
    answer += data[i];
    printf("%d\n", answer);
  }

  return 0;
}
