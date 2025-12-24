#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int A[n];
  int sum;
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        sum = A[i] + A[j] + A[k];
        if (sum == 1000) {
          puts("Yes");
          return 0;
        }
      }
    }
  }
  puts("No");
  return 0;
}
