#include <stdio.h>

int main(void) {

  int an, ad, bn, bd, dp = 2, mcd = 1;
  char op;
  
  printf("Insira as fracoes: ");
  scanf("%d/%d%c%d/%d", &an, &ad, &op, &bn, &bd);

  switch (op){
    
    case '+':
      an = an * bd;
      bn = bn * ad;
      an = an + bn;
      ad = ad * bd;
      break;
    
    case '-':
      an = an * bd;
      bn = bn * ad;
      an = an - bn;
      ad = ad * bd;
      break;
    
    case '*':
      an = an * bn;
      ad = ad * bd;
      break;
    
    case '/':
      an = an * bd;
      ad = ad * bn;
  }

  //printf("%d/%d", an, ad);

  //Fração irredutível
  int fn = an, fd = ad;

  while ((an != 1) && (ad != 1)) {

    //printf("\nTesting %d\n", dp);
    //getchar();

    while (1) { // Decompor
      
      if ((an % dp == 0) && (ad % dp == 0)) {
        mcd = mcd * dp;
        an = an / dp;
        ad = ad / dp;
      } else if (an % dp == 0) {
        an = an / dp;
      } else if (ad % dp == 0) {
        ad = ad / dp;
      } else {
        break;
      }
      //printf("%d %d %d\n", an, ad, mcd);
    }

      for (int i = 1; i != dp; i++) { // Verificar se é primo
        if (dp % i == 0) {
          dp++;
          i = 1;
      }
    }
  }

  fn = fn / mcd;
  fd = fd / mcd;

  printf("Resultado: %d/%d", fn, fd);
  
  return 0;
}
