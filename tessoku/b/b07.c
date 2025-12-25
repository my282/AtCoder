#include <stdio.h>

int main(void) {
  int T, N;
  int L, R;
  scanf("%d%d", &T, &N);
  int data[T + 2];
  for (int i = 0; i < T + 2; i++)
    data[i] = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d%d", &L, &R);
    data[L]++;
    data[R]--;
  }
  // answer
  int answer = 0;
  for (int i = 0; i <= T - 1; i++) {
    answer += data[i];
    printf("%d\n", answer);
  }
  return 0;
}
