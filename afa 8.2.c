#include <stdio.h>

int calcular_mdc (int n1, int n2){

  int mcd = 1, dp = 2;
  
  while ((n1 != 1) && (n2 != 1)) {

    while (1) {
      
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
    }

      for (int i = 1; i != dp; i++) {
        if (dp % i == 0) {
          dp++;
          i = 1;
      }
    }
  }

  return mcd;
}


int main(void) {

  int n1, n2;

  printf("Numeros: ");
  scanf("%d %d", &n1, &n2);

  printf("MCD: %d", calcular_mdc (n1, n2));

  return 0;
}
