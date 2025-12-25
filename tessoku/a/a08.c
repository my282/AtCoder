#include <stdio.h>

int main(void) {
  // input
  int h, w;
  scanf("%d%d", &h, &w);
  long long int X[h + 1][w + 1];
  X[0][0] = 0;
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      scanf("%lld", &X[i][j]);
    }
  }
  for (int i = 1; i <= h; i++)
    X[i][0] = 0;
  for (int i = 1; i <= w; i++)
    X[0][i] = 0;
  // calc
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      X[i][j] += X[i][j - 1];
    }
  }
  for (int i = 1; i <= w; i++) {
    for (int j = 1; j <= h; j++) {
      X[j][i] += X[j - 1][i];
    }
  }
  // input & answer
  int q;
  scanf("%d", &q);
  int A[q], B[q], C[q], D[q];
  int a, b, c, d;
  long long int answer;
  for (int i = 0; i < q; i++) {
    scanf("%d%d%d%d", &A[i], &B[i], &C[i], &D[i]);
  }
  for (int i = 0; i < q; i++) {
    a = A[i];
    b = B[i];
    c = C[i];
    d = D[i];
    answer = X[c][d] - X[a - 1][d] - X[c][b - 1] + X[a - 1][b - 1];
    if (A[i] == 1 && B[i] == 1)
      answer = X[c][d];
    printf("%lld\n", answer);
  }
  return 0;
}
