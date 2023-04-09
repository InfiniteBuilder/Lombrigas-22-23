#include <stdio.h>

int main(void) {

  int n, i = 2, s = 4; // Qual o mais eficiente para o computador, adicionar uma variável "s" ou calcular os quadrados 3 vezes?
  
  printf("Inserir número inteiro: ");
  scanf("%d", &n);
  printf("\n\nQuadrados pares inferiores ou iguais a %d:\n", n);

  while (s <= n){
    if (s % 2 == 0){
      printf("\n%d", s);
    }
    i++;
    s = i*i;
  }
  
  return 0;
}
