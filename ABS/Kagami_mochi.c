#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

int main(void) {
  int n = 0;
  scanf("%d", &n);
  int d[n];
  int count_buffer = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &d[i]);
  }
  qsort(d, n, sizeof(int), compare);
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      count_buffer++;
    } else if (d[i - 1] != d[i]) {
      count_buffer++;
    }
  }
  printf("%d", count_buffer);
  return 0;
}
