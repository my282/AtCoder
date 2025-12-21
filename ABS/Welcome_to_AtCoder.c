#include <stdio.h>

int main(void) {
  int a, b, c;
  char input[256];
  scanf("%d%d%d", &a, &b, &c);
  scanf("%s", input);
  printf("%d %s", a + b + c, input);
  return 0;
}
