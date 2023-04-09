#include <stdio.h>

int main(void) {

  int val;

  printf("Nota: ");
  scanf("%d", &val);
  printf("Letra: ");

  switch (val) {

  case -9 ... -1:
  case 101 ... 109:
    printf("Erro, nota deve estar entre 0 e 100.");
    break;

  default:

    val = val / 10;

    switch (val) {

    case 0 ... 5:
      printf("F");
      break;

    case 6:
      printf("D");
      break;

    case 7:
      printf("C");
      break;

    case 8:
      printf("B");
      break;

    case 9:
    case 10:
      printf("A");
      break;

    default:
      printf("Erro, nota deve estar entre 0 e 100.");
    }
  }

  return 0;
}
