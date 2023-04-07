#include <stdio.h>

int main(void) {

  float e, ta, tm, p; //empréstimo, taxa anual, taxa mensal, prestação
  float v1, v2, v3; //valores após x meses

  printf("Valor do empréstimo [€]: ");
  scanf("%f", &e);

  printf("Valor da taxa anual: ");
  scanf("%f", &ta);
  tm = ta / 12;

  printf("Valor da prestação: ");
  scanf("%f", &p);

  v1 = (e - p) * (1 + (tm/100));
  v2 = (v1 - p) * (1 + (tm/100));
  v3 = (v2 - p) * (1 + (tm/100));

  printf("\nValor restante após 1a prestação: %f\n", v1);
  printf("Valor restante após 2a prestação: %f\n", v2);
  printf("Valor restante após 3a prestação: %f\n", v3);
}
