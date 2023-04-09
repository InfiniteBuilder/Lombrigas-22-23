#include <stdio.h>

int main(void) {

  char in;
  int r = 1;
  printf("Numero em letras: ");

  while (in != '\n'){
    in = getchar();
    
    if (r == 1){
      printf("Numero: ");
      r = 0;
    }
    
    if ((in >= 'A') && (in <= 'Z')){
      
      if ((in >= 'A') && (in <= 'C')){
        printf("2");
      }
      if ((in >= 'D') && (in <= 'F')){
        printf("3");
      }
      if ((in >= 'G') && (in <= 'I')){
        printf("4");
      }
      if ((in >= 'J') && (in <= 'L')){
        printf("5");
      }
      if ((in >= 'M') && (in <= 'O')){
        printf("6");
      }
      if ((in >= 'P') && (in <= 'S')){
        printf("7");
      }
      if ((in >= 'T') && (in <= 'V')){
        printf("8");
      }
      if ((in >= 'X') && (in <= 'Z')){
        printf("9");
      }
    }
    else {
      printf("%c", in);
    }
  }
  
  return 0;
}
