#include <stdio.h>

void escrever_calendario_mes (unsigned char n_dias, unsigned char dia_semana_inicio){

  for (int i = 0; i < dia_semana_inicio; i++){

    printf("   ");
  }

  for (int i = 0, n = 1; n <= n_dias ; i++){
    
    for (int j = 0; (j <= 6 && n <= n_dias); j++){

      if (i == 0 && j == 0) j = dia_semana_inicio;
      
      printf("%2d ", n);
      n++;
    }

    printf("\n");
  }
}

int main (void){

  int n_dias, dia_semana_inicio;
  
  printf("Número de dias: ");
  scanf("%d", &n_dias);

  printf("\nDia de início:\n");
  printf("\n0 - Domingo\n1 - Segunda\n2 - Terça\n3 - Quarta\n4 - Quinta\n5 - Sexta\n6 - Sábado\n\nEscolha: ");
  scanf ("%d", &dia_semana_inicio);
  
  printf("\n\n D  2  3  4  5  6  S\n");
  escrever_calendario_mes (n_dias, dia_semana_inicio);
  
  return 0;
}
