#include <stdio.h>

int main(void) {

  int a[5][5];

  for (int i = 0; i < 5; i++){

    printf("Linha %d: ", i + 1);

    for (int j = 0; j < 5; j++){

      scanf("%d%c", &a[i][j]);
    }
  }

  printf("\nTotais linhas:");
  
  for (int i = 0, n; i < 5; i++){

    n = 0;
    
    for (int j = 0; j < 5; j++){

      n += a[i][j];
    }

    printf(" %d", n);
  }

  printf("\nTotais colunas:");
  
  for (int i = 0, n; i < 5; i++){

    n = 0;
    
    for (int j = 0; j < 5; j++){

      n = n + a[j][i];
    }

    printf(" %d", n);
  }
    
  return 0;
}
