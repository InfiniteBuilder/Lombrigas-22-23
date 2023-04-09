#include <stdio.h>

int main(void) {

  int k;
  char c;

  printf("Chave: ");
  scanf("%d", &k);
  getchar();

  while (k > 25){
    k = k - 25;
  }

  while (k < -25){
    k = k + 25;
  }

  // Ocorre-me a este ponto que pode ser possível manipular de forma semelhante o valor de k de forma a ser sempre positivo, poupando condições adiante.

  printf("Letra: ");
  scanf("%c", &c);

  switch (c) {
  case 'A' ... 'Z':
    if (('Z' - c) < k) {
      c = k - ('Z' - c) + 'A' - 1;
    }
    else if (((c - 'A') < -k) && (k < 0)){
      c = 'Z' + k + (c - 'A') +1;
    }
    else {
      c = c + k;
    }
    break;
  case 'a' ... 'z':
    if ((('z' - c) < k) && (k > 0)) {
      c = k - ('z' - c) + 'a' -1;
    }
    else if (((c - 'a') < k) && (k < 0)){
      c = 'z' + k + (c - 'a') +1;
    }
    else {
      c = c + k;
    }
    break;
  }

  printf("Letra codificada: %c", c);

  return 0;
}
