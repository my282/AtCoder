#include <stdio.h>

int main(void) {
  int d, f;
  scanf("%d%d", &d, &f);
  int answer = 0;
  answer = f + (d / 7) * 7 - d;
  if (answer <= 0)
    answer += 7;
  printf("%d", answer);
  return 0;
}
