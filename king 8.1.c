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

  printf("Resultados:");

  for (int i = 0; i < 10; i++){

    if (d[i] > 1){

      printf(" %d", i);
    }
  }
  
  return 0;
}
