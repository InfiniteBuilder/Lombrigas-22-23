#include <stdio.h>

int main(void) {

  char c, ini;
  
  printf("Nome: ");

  ini = getchar();
  
  do {
    c = getchar();
  }
  while (c != ' ');

  while (1) {
    c = getchar();
    if (c == '\n'){
      break;
    }
    printf("%c", c);
  }

  printf(", %c.", ini);
  
  return 0;
}
