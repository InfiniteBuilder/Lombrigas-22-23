#include <stdio.h>

int main(void) {

  char c;
  
  printf("Frase: ");
  c = getchar();
  
  printf("Minusculas: ");

  while (c != '\n'){
    
    switch (c){
      case 'A'...'Z':
        c = c + 32;
    }
    printf("%c", c);

    c = getchar();
  }
  
  return 0;
}
