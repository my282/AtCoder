// clang-format off
#include <stdio.h>
int binary_search(int array[], int N, int X) { 
  // 　探索を行う配列array 1~N番目の要素の探索を行う Xが何番目かを探索
  int L = 1;
  int R = N;
  int M;
  while (L <= R) {
    M = (L + R) / 2;
    if (X < array[M])
      R = M - 1;
    if (X == array[M])
      return M;
    if (X > array[M])
      L = M + 1;
  }
  return -1;
}

int main(void) {
  int N, X;
  scanf("%d%d", &N, &X);
  int A[N + 10];
  for (int i = 1; i <= N; i++)
    scanf("%d", &A[i]);
  printf("%d", binary_search(A, N, X));
  return 0;
}
