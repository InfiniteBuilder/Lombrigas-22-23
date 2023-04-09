#include <stdio.h>

int main(void) {

  int n = 0;
  char c;
  
  printf("Frase: ");

  do{
    c = getchar();
    
    switch (c){
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        n++;
    }
  }
  while (c != '\n');

  printf("Vogais: %d", n);
  
  return 0;
}
