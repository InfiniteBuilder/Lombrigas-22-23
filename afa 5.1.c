#include <stdio.h>

int main(void) {

  // oz = g / 28.349523
  // lb = g / 453.5920865
  // kg = g / 1000

  int unit;
  float mass;
  
  printf("Introduza a massa em gramas: ");
  scanf("%f", &mass);

  printf("Qual e a unidade de conversao:\n1 - oz\n2 - lb\n3 - kg\nEscolha: ");
  scanf("%d", &unit);

  printf("%f g = ", mass);

  switch (unit){

    case 1:
      mass = mass / 28.349523;
      printf("%f oz", mass);
      break;

    case 2:
      mass = mass / 453.5920865;
      printf("%f lb", mass);
      break;

    case 3:
      mass = mass / 1000;
      printf("%f kg", mass);
      break;
  }
  
  return 0;
}
