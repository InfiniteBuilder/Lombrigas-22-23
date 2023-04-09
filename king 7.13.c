#include <stdio.h>

int main(void) {

  char c;
  float n = 0, s = 0;
  printf("Frase: ");

  while (1){

    c = getchar();
    
    switch (c){
      case '\n':
        n++;
        goto exit_loop;
      case ' ':
        n++;
        break;
      default:
        s++;
    }
  }

  exit_loop: ;
  printf("Tamanho medio das palavras: %f", s / n);
  
  return 0;
}
