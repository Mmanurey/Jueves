#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int i = 1;
  int resultado = 1;
  while (i <= n) {
    resultado = resultado * i;
    if (resultado <= 0) return printf("Nos fuimos\n");
    i++;
  }
  printf("Factorial de %d; %d\n", n, resultado);
  return 0;
}
