#include <stdio.h>


void print_Matriz (int tam, int mag[tam][tam]){ // By João Pinto

  printf("\n");
  
  for (int i = 0; i < tam; i++) {

    for (int j = 0; j < tam; j++) {
      
        printf("%-4d", mag[i][j]); 
    }
    printf("\n");
  }
}


int main(void) {

  int n; // Lado da matriz

  printf("Tamanho: ");
  scanf("%d", &n);

  while (n % 2 == 0){

    printf ("\nErro: o valor deve ser ímpar.\n\n");

    printf("Tamanho: ");
    scanf("%d", &n);
  }

  int matriz[n][n];

  for (int i = 0; i < n; i++){ // Inicia matriz (tudo zeros)

    for (int j = 0; j < n; j++){

      matriz[i][j] = 0;
    }
  }

  matriz [0][n/2] = 1;

  //print_Matriz (n, matriz);

  for (int a = 2, i = 0, j = (n / 2), old_i, old_j;
       a <= (n * n);
       a++){

    old_i = i;
    old_j = j;

    if (i == 0) i = (n - 1);
    else i--;

    if (j == (n - 1)) j = 0;
    else j++;

    if (matriz[i][j] != 0){

      i = old_i;
      j = old_j;

      if (i == (n - 1)) i = 0;
      else i++;
    }

    matriz [i][j] = a;
  }

  print_Matriz (n, matriz);
  
  return 0;
}
