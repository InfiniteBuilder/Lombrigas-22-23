#include <stdio.h>

int main(void) {

  float n1, n2;
  char op;
  
  printf("Expressao: ");
  scanf("%f", &n1);

  while (1){
    
    //printf("looping\n");
    
    op = getchar();
    if (op == '\n'){
      break;
    }
    
    scanf("%f", &n2);

    switch (op){
      case '+':
        n1 = n1 + n2;
        break;
      case '-':
        n1 = n1 - n2;
        break;
      case '*':
        n1 = n1 * n2;
        break;
      case '/':
        n1 = n1 / n2;
        break;
    }
  }

  printf("Resultado: %f", n1);
  
  return 0;
}
