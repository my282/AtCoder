#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char input[8];
  int input_size = 0;
  int answer = 0;
  scanf("%s", input);
  input_size = strlen(input);
  for (int i = 0; i < input_size; i++) {
    if (input[i] == '1')
      answer = answer + (int)pow(2, input_size - 1 - i);
  }
  printf("%d", answer);
  return 0;
}
