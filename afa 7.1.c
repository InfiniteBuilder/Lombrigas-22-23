#include <stdio.h>

int main(void) {

  char c;
  
  printf("Letra minuscula: ");
  c = getchar();

  //a = 97, A = 65
  c = c - 32;

  printf("Letra maiuscula: %c", c);
  
  return 0;
}
