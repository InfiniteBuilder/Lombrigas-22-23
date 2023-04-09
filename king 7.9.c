#include <stdio.h>

int main(void) {

  int h, m, op = 0;
  char c;
  
  printf("Hora 12: ");
  scanf("%d:%d%c", &h, &m, &c);
  
  do {
    if (c == 'p'){
      op = 1;
    }
    scanf("%c", &c);
  }
  while (c != '\n');
  
  if (op == 1){
    h = h + 12;
  }

  printf("Hora 24: %d:%d", h, m);

  return 0;
}
