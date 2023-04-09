#include <stdio.h>

int main(void) {

  int n, d[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  printf("Numero inteiro: ");
  scanf("%d", &n);

  for (int i; n > 0; ){

    i = n % 10;
    d[i] = d[i] + 1;
    n /= 10;

    //printf("%d\n", n);
  }

  printf("Digitos:\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n");
  printf("Contagem:\t");

  for (int i = 0; i < 10; i++){

    printf("%d\t", d[i]);
  }
  
  return 0;
}
