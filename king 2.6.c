#include <stdio.h>

int main(void) {

  int x, p;

  printf("Inserir x: ");
  scanf("%d", &x);

  p = ((((3*x+2)*x -5)*x - 1)*x + 7)*x - 6;

  printf("Valor do polinómio: %d", p);

  /* Ao multiplicar sucessivamente por x,
  estamos a subir o grau das expressões que vão aparecendo.

  Por exemplo, a expressão 3x+2 é multiplicada por x
  4 vezes ao longo do cálculo, resultando em 3x^5 + 2x^4 no final.*/
  
  return 0;
}
