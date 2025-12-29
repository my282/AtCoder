#include <stdio.h>
int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

int main(void) {
  // input
  int N;
  scanf("%d", &N);
  int A[N + 10], max_buffer_left[N + 10], max_buffer_right[N + 10];
  for (int i = 1; i <= N; i++)
    scanf("%d", &A[i]);
  int D;
  scanf("%d", &D);
  int L[D + 10], R[D + 10];
  for (int i = 1; i <= D; i++)
    scanf("%d%d", &L[i], &R[i]);

  max_buffer_left[1] = A[1];
  for (int i = 1; i <= N; i++)
    if (i != 1)
      max_buffer_left[i] = max(A[i], max_buffer_left[i - 1]);

  max_buffer_right[N] = A[N];
  for (int i = N; i >= 1; i--) {
    if (i != N)
      max_buffer_right[i] = max(A[i], max_buffer_right[i + 1]);
  }

  for (int i = 1; i <= D; i++)
    printf("%d\n", max(max_buffer_left[L[i] - 1], max_buffer_right[R[i] + 1]));
  return 0;
}
