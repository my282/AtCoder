#include <stdio.h>

int main(void) {
  int n, q;
  scanf("%d%d", &n, &q);
  int A[n];
  int L[q];
  int R[q];
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    if (i != 0) {
      A[i] += A[i - 1];
    }
  }
  for (int i = 0; i < q; i++) {
    scanf("%d", &L[i]);
    scanf("%d", &R[i]);
  }

  for (int i = 0; i < q; i++) {
    int answer = 0;
    if (L[i] == 1) {
      answer = A[R[i] - 1];
    } else {
      answer = A[R[i] - 1] - A[L[i] - 2];
    }
    printf("%d\n", answer);
  }
  return 0;
}
