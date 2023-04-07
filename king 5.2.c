#include <stdio.h>

int main(void) {

  int h, m;

  printf("Introduza hora no formato 24h: ");
  scanf("%d:%d", &h, &m);

  printf("Hora no formato 12h:\t\t   ");

  if (h > 12) {
    h = h - 12;
    printf("%02d:%02d PM", h, m);
    }
  else
    printf("%02d:%02d AM", h, m);

  return 0;
}
