#include <stdio.h>

int main(void) {

  int h, m, s; //input de horas, minutos e segundos
  int val;     //output segundos

  printf("Horas: ");
  scanf("%d", &h);

  printf("Minutos: ");
  scanf("%d", &m);

  printf("Segundos: ");
  scanf("%d", &s);

  val = s + (m*60) + (h*3600);
  printf("\nTotal em segundos: %d", val);
}
