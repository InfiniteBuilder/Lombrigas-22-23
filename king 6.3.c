#include <stdio.h>

int main(void) {

  int n1, n2, mcd = 1, dp = 2;

  printf("Introduza fracao: ");
  scanf("%d/%d", &n1, &n2);

  int fn = n1, fd = n2;

  while ((n1 != 1) && (n2 != 1)) {

    //printf("\nTesting %d\n", dp);
    //getchar();

    while (1) { // Decompor
      
      if ((n1 % dp == 0) && (n2 % dp == 0)) {
        mcd = mcd * dp;
        n1 = n1 / dp;
        n2 = n2 / dp;
      } else if (n1 % dp == 0) {
        n1 = n1 / dp;
      } else if (n2 % dp == 0) {
        n2 = n2 / dp;
      } else {
        break;
      }
      //printf("%d %d %d\n", n1, n2, mcd);
    }

      for (int i = 1; i != dp; i++) { // Verificar se é primo
        if (dp % i == 0) {
          dp++;
          i = 1;
      }
    }
  }

  fn = fn / mcd;
  fd = fd / mcd;

  printf("Simplificada: %d/%d", fn, fd);

  return 0;
}
