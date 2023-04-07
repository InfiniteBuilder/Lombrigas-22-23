#include <stdio.h>

int main(void) {

  int val, n20, n10, n5, m2, m1;

  printf("Valor [€]: ");
  scanf("%d", &val);

  n20 = val / 20;
  val = val - (n20 * 20);
  printf("Notas de 20€: %d\n", n20);
  //printf("val: %d\n", val);

  n10 = val / 10;
  val = val - (n10 * 10);
  printf("Notas de 10€: %d\n", n10);
  //printf("val: %d\n", val);

  n5 = val / 5;
  val = val - (n5 * 5);
  printf("Notas de  5€: %d\n", n5);
  //printf("val: %d\n", val);

  m2 = val / 2;
  val = val - (m2 * 2);
  printf("Moedas de 2€: %d\n", m2);
  //printf("val: %d\n", val);

  m1 = val / 1;
  //val = val - m1;
  printf("Moedas de 1€: %d\n", m1);
  //printf("val: %d\n", val);

  /* O valor deve ser inteiro pois, em C, ao dividir
  dois números inteiros, o resto é automaticamente ignorado.
  Se dividirmos com float, o resultado será também em float,
  e o número de notas tem que ser sempre um número inteiro. */
}
