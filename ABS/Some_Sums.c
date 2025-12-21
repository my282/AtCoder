#include <stdio.h>
void setup_array(char array[]) {
  for (int i = 0; i < 32; i++) {
    array[i] = '0';
  }
}

int main(void) {
  int n, a, b;
  int number_buf = 0;
  char string_buf[32] = "0";
  int sum_buf = 0;
  scanf("%d%d%d", &n, &a, &b);
  for (int i = n; i > 0; i--) {
    number_buf = 0;
    setup_array(string_buf);
    snprintf(string_buf, sizeof(string_buf), "%d", i);
    for (int j = 0; string_buf[j] != '\0'; j++) {
      number_buf += (string_buf[j] - '0');
    }
    if ((a <= number_buf) && (number_buf <= b)) {
      sum_buf += i;
    }
  }
  printf("%d", sum_buf);
  return 0;
}
