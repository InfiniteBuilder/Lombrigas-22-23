#include <stdio.h>

float potencia (int b, int e){

  float p = 1;

  if (e < 0){
    e = -e;
    for (int i = 1; i <= e; i++){
      p = p * b;
    }
    return 1 / p;
  }

  else {
    for (int i = 1; i <= e; i++){
      p = p * b;
    }
    return p;
  }
  
}

int main(void) {

  float x;

  printf("Resolução do polinómio:\n\n");
  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n\n\n");

  printf("Valor de x: ");
  scanf("%f", &x);

  x = ((3 * potencia (x, 5)) + (2 * potencia (x, 4)) -
       (5 * potencia (x, 3)) - potencia (x, 2) + (7 * x) - 6);

  printf("\nValor: %f", x);
  
  return 0;
}
