#include <stdio.h>

int main(void) {

  float r, rl, t;
  
  printf("Rendimento: ");
  scanf("%f", &r);

  if (r <= 7116)
    t = r * 0.145;
  else if (r <= 15216)
    t = r * 0.23;
  else if (r <= 36757)
    t = r * 0.285;
  else if (r <= 75009)
    t = r * 0.435;
  else
    t = r * 0.48;

  rl = r - t;

  printf("Imposto total sobre o rendimento: %f\n", t);
  printf("Rendimento líquido final: %f", rl);
  
  return 0;
}
