#include <stdio.h>

int main(void) {

  int a[5][5];

  for (int i = 0; i < 5; i++){

    printf("Aluno %d: ", i + 1);

    for (int j = 0; j < 5; j++){

      scanf("%d%c", &a[i][j]);
    }
  }

  
  printf("\nNotas finais:");
  
  for (int i = 0, n; i < 5; i++){

    n = 0;
    
    for (int j = 0; j < 5; j++){

      n += a[i][j];
    }

    printf(" %d", n);
  }

  
  printf("\nMédia de cada teste:");
  
  for (int i = 0, n; i < 5; i++){

    n = 0;
    
    for (int j = 0; j < 5; j++){

      n = n + a[j][i];
    }

    printf(" %.2f", (n / 5.0)); // Casting para float
  }

  
  printf("\nNotas mínimas:");
  
  for (int i = 0, n; i < 5; i++){

    n = a[0][i];
    
    for (int j = 1; j < 5; j++){

      if (n > a[j][i]){

        n = a[j][i];
      };
    }

    printf(" %d", n);
  }


  printf("\nNotas máximas:");
  
  for (int i = 0, n; i < 5; i++){

    n = a[0][i];
    
    for (int j = 1; j < 5; j++){

      if (n < a[j][i]){

        n = a[j][i];
      };
    }

    printf(" %d", n);
  }
    
  return 0;
}
