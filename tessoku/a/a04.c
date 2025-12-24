#include <stdio.h>

int main(void) {
  int n = 0;
  scanf("%d", &n);
  int answer[10];
  for (int i = 0; i < 10; i++) {
    answer[i] = n % 2;
    n = n / 2;
  }
  for (int i = 0; i < 10; i++)
    printf("%d", answer[9 - i]);
  return 0;
}
