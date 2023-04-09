#include <stdio.h>

int main(void) {

  float m;
  int u1, u2;
  
  printf("Introduza a massa: ");
  scanf("%f", &m);

  printf("Qual e a unidade desta massa:\n1 - oz\n2 - lb\n3 - kg\n4 - g\nEscolha: ");
  scanf("%d", &u1);

  printf("\nQual e a unidade de conversao:\n1 - oz\n2 - lb\n3 - kg\nEscolha: ");
  scanf("%d", &u2);

  printf("%f ", m);

  switch (u1){
    
    case 1:
      m = m * 28.34952;
      printf("oz");
      break;

    case 2:
      m = m * 453.59237;
      printf("lb");
      break;

    case 3:
      m = m * 1000;
      printf("kg");
      break;

    case 4:
      printf("g");
      break;
  }

  printf(" = ");

  switch (u2){

    case 1:
      m = m / 28.34952;
      printf("%f oz", m);
      break;

    case 2:
      m = m / 453.59237;
      printf("%f lb", m);
      break;

    case 3:
      m = m / 1000;
      printf("%f kg", m);
      break;
  }
  return 0;
}
