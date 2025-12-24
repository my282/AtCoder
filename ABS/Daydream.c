#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse_str(char str[]) {
  int length = strlen(str);
  char buffer[length];
  for (int i = 0; str[i] != '\0'; i++) {
    buffer[i] = str[i];
  }
  for (int i = 0; i < length; i++) {
    str[i] = buffer[length - i];
  }
  return;
}

int main(void) {
  char input[(int)pow(10, 5)];
  scanf("%s", input);
  reverse_str(input);
  return 0;
}
