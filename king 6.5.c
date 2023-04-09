#include <stdio.h>

int main(void) {

  // /10 remove o último dígito
  // %10 devolve o último dígito
  
  int n;
  
  printf("Numero inteiro: ");
  scanf("%d", &n);

  printf("Numero invertido: ");

  if (n < 0){ // Não foi pedido mas resolve um erro
    printf("-");
    n = -n;
  }

  while (n > 0){
    printf("%d", n % 10);
    n = n / 10;
  }
}
