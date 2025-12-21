#include <stdio.h>

int main(void) {
  int n = 0;
  int a[200];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int count = 0;
  while (1) {
    for (int i = 0; i < n; i++) {
      if (a[i] % 2 == 1) {
        printf("%d", count);
        return 0;
      }
      a[i] = a[i] / 2;
    }
    count++;
  }
  return 0;
}
