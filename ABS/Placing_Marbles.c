#include <stdio.h>

int main(void) {
  int count = 0;
  int input;
  scanf("%d", &input);
  if (input >= 100) {
    input -= 100;
    count++;
  }
  if (input >= 10) {
    input -= 10;
    count++;
  }
  if (input == 1) {
    count++;
  }
  printf("%d", count);
  return 0;
}
