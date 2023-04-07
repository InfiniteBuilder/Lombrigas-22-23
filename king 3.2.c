#include <stdio.h>

int main(void) {

  int id, dd, dm, da;
  float p;
  
  printf("Insira o ID do produto: ");
  scanf("%d", &id);

  printf("Insira o preço: ");
  scanf("%f", &p);

  printf("Insira a data de aquisição (dd/mm/aaaa): ");
  scanf("%d/%d/%d", &dd, &dm, &da);

  printf("Item\t\tPreço\t\tData da\n");
  printf("\t\t\tUnitário\tCompra\n");
  printf("%-12d€%8.2f\t%d/%02d/%02d", id, p, da, dm, dd);
  
  return 0;
}
