#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int a = 0;
  int b = 1;
  printf("%d\n%d\n", a, b);
  for (int i = 0; i < n; i++) {
    int c = a + b;
    printf("%d\n", c);
    a = b;
    b = c;
  }
  return 0;
}
