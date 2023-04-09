// Escrevi este código por forma a dar ao utilizador a escolha da variável a utlizar. Isso faz o programa substancialmente mais complicado. Não é necessário.

// Foi-me notado por alguns que os meus resultados estão errados. Talvez. Não me apetece corrigir. Desafio: encontrar os erros!


#include <stdio.h>

int main(void) {

  int op, n = 2, prev = 1;
  short int n_short = 2, prev_short = 1;
  unsigned int n_unsigned = 2, prev_unsigned = 1;
  long n_long = 2, prev_long = 1;
  unsigned long i = 1, n_unsignedlong = 2, prev_unsignedlong = 1;
  
  printf("Tipo de variável:\n\n1 - int\n2 - short int\n3 - unsigned int\n4 - long\n5 - unsigned long\n\nEscolha: ");
  
  scanf("%d", &op);

  switch (op){
    case 1:{ 
      while (1){
        n = n * 2;
        i++;
        //printf("\nTesting %d", n);
        if (n < prev){
          printf("\nLado do primeiro quadrado que causa overflow: %lu", i);
          printf("\nQuadrado que causa overflow: %d", n);
          printf("\nUltimo quadrado antes do overflow: %d", prev);
          break;
        }
        prev = n;
      }
      break;
      }
    case 2:{
      while (1){
        n_short = n_short * 2;
        i++;
        //printf("\nTesting %d", n_short);
        if (n_short < prev_short){
          printf("\nLado do primeiro quadrado que causa overflow: %lu", i);
          printf("\nQuadrado que causa overflow: %d", n_short);
          printf("\nUltimo quadrado antes do overflow: %d", prev_short);
          break;
        }
        prev_short = n_short;
      }
      break;
    }
    case 3:{
      while (1){
        n_unsigned = n_unsigned * 2;
        i++;
        //printf("\nTesting %du", n_unsigned);
        if (n_unsigned < prev_unsigned){
          printf("\nLado do primeiro quadrado que causa overflow: %lu", i);
          printf("\nQuadrado que causa overflow: %d", n_unsigned);
          printf("\nUltimo quadrado antes do overflow: %d", prev_unsigned);
          break;
        }
        prev_unsigned = n_unsigned;
      }
      break;
    }
    case 4:{
      while (1){
        n_long = n_long * 2;
        i++;
        //printf("\nTesting %ld", n_long);
        if (n_long < prev_long){
          printf("\nLado do primeiro quadrado que causa overflow: %lu", i);
          printf("\nQuadrado que causa overflow: %ld", n_long);
          printf("\nUltimo quadrado antes do overflow: %ld", prev_long);
          break;
        }
        prev_long = n_long;
      }
      break;
    }
    case 5:{
      while (1){
        n_unsignedlong = n_unsignedlong * 2;
        i++;
        //printf("\nTesting %lu", n_unsignedlong);
        if (n_unsignedlong < prev_unsignedlong){
          printf("\nLado do primeiro quadrado que causa overflow: %lu", i);
          printf("\nQuadrado que causa overflow: %lu", n_unsignedlong);
          printf("\nUltimo quadrado antes do overflow: %lu", prev_unsignedlong);
          break;
        }
        prev_unsignedlong = n_unsignedlong;
      }
      break;
    }
  }
  
  return 0;
}
