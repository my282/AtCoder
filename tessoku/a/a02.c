#include <stdio.h>

int main(void) {
  int n, x;
  scanf("%d%d", &n, &x);
  int input[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &input[i]);
  }
  for (int i = 0; i < n; i++) {
    if (input[i] == x) {
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}
