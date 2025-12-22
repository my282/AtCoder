#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int main(void) {
  int n = 0;
  int sum = 0;
  int sum_flag = 0;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), &compare);
  for (int i = n - 1; i >= 0; i--) {
    if (sum_flag == 0) {
      sum += a[i];
      sum_flag = 1;
    } else {
      sum -= a[i];
      sum_flag = 0;
    }
  }
  printf("%d", sum);
  return 0;
}
