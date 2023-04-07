#include <stdio.h>

int main(void) {

  int d, m, a;
  
  printf("Insira data: ");
  scanf("%d/%d/%d", &d, &m, &a);

  printf("Escreveu:    %d/%02d/%02d", a, m, d);
  
  return 0;
}
