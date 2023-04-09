// Neste exercício incluí a "estratégia mais simples" e outra mais complexa que me parece mais eficiente. Apenas a segunda está ativada. Explicação no final.


// ___Por tentativa e erro___ (eficiente em valores baixos?)

/*#include <stdio.h>

int main(void) {

  int n1, n2, mcd;

  printf("Numeros: ");
  scanf("%d %d", &n1, &n2);
  mcd = n1;
  //n1 e n2 poderiam ser comparados com um if, else. mcd seria igual ao menor
(mais código, menos operações)

  while ((n1 % mcd != 0) || (n2 % mcd != 0)){
    mcd--;
  }

  printf("MCD: %d", mcd);

  return 0;
}*/



// ___Por decomposição em fatores primos___ (eficiente em valores altos?)

#include <stdio.h>

int main(void) {

  int n1, n2, mcd = 1, dp = 2;

  printf("Numeros: ");
  scanf("%d %d", &n1, &n2);

  while ((n1 != 1) && (n2 != 1)) {

    //printf("\nTesting %d\n", dp);
    //getchar();

    while (1) { // Decompor
      
      if ((n1 % dp == 0) && (n2 % dp == 0)) {
        mcd = mcd * dp;
        n1 = n1 / dp;
        n2 = n2 / dp;
      } else if (n1 % dp == 0) {
        n1 = n1 / dp;
      } else if (n2 % dp == 0) {
        n2 = n2 / dp;
      } else {
        break;
      }
      //printf("%d %d %d\n", n1, n2, mcd);
    }

      for (int i = 1; i != dp; i++) { // Verificar se é primo
        if (dp % i == 0) {
          dp++;
          i = 1;
      }
    }
  }

  printf("MCD: %d", mcd);

  return 0;
}



/* Ambos os códigos têm módulos de incremento unitário.

O primeiro código incrementa até ao input mais baixo.
O segundo código incrementa até ao fator primo mais alto.

Exemplo: n1 = 123456, n2 = 65432 (mcd = 8)

Código 1: incrementa até 65432
Código 2: incrementa até 643 */
