#include <stdio.h>

int main(void) {

  int n, d;

  printf("Introduza o numero inteiro (maximo 4 digitos): ");
  scanf("%d", &n);

  if (n < 0){  
    n = -n;  

  if (n < 10)
    d = 1;
  else if (n < 100)
    d = 2;
  else if (n < 1000)
    d = 3;
  else
    d = 4;

  printf("# digitos:\t\t\t\t\t\t\t\t\t   %d", d);
  
  return 0;
}
