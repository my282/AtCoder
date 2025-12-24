#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  int array[] = {1, 2, 4, 5, 10, 20, 25, 50, 100};
  for (int i = a; i <= b; i++) {
    for (int j = 0; array[j] != '\0'; j++) {
      if (array[j] == i) {
        puts("Yes");
        return 0;
      }
    }
  }
  puts("No");
  return 0;
}
