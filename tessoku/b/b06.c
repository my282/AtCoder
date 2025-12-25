#include <stdio.h>

int main(void) {
  // input
  int n, q;
  scanf("%d", &n);
  int A[n + 1];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &A[i]);
    A[i] += A[i - 1];
  }
  scanf("%d", &q);
  int L[q + 1], R[q + 1];
  for (int i = 1; i <= q; i++) {
    scanf("%d", &L[i]);
    scanf("%d", &R[i]);
  }
  // answer
  int num_win = 0;
  int num_lose = 0;
  for (int i = 1; i <= q; i++) {
    num_win = A[R[i]] - A[L[i] - 1];
    num_lose = R[i] - L[i] + 1 - num_win;
    if (num_win > num_lose) {
      puts("win");
    } else if (num_win == num_lose) {
      puts("draw");
    } else {
      puts("lose");
    }
  }
  return 0;
}
