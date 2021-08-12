#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  printf("MCD: %d\n", a);
  return 0;
}
