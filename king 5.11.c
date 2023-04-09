#include <stdio.h>

int main(void) {

  int n1, n2;

  printf("Nota: ");
  scanf("%1d%1d", &n1, &n2);
  printf("Letra: ");

  switch (n1){

    case 1:
      switch (n2){

        case 0:
          printf("dez");
          break;

        case 1:
          printf("onze");
          break;

        case 2:
          printf("doze");
          break;

        case 3:
          printf("treze");
          break;

        case 4:
          printf("quatorze");
          break;

        case 5:
          printf("quize");
          break;

        case 6:
          printf("dezasseis");
          break;

        case 7:
          printf("dezassete");
          break;

        case 8:
          printf("dezoito");
          break;

        case 9:
          printf("dezanove");
          break;
      }
      break;

    case 2:
      printf("vinte");
      break;

    case 3:
      printf("trinta");
      break;

    case 4:
      printf("quarenta");
      break;

    case 5:
      printf("cinquenta");
      break;

    case 6:
      printf("sessenta");
      break;

    case 7:
      printf("setenta");
      break;

    case 8:
      printf("oitenta");
      break;

    case 9:
      printf("noventa");
      break;
  }

  switch (n1){

    case 1:
      break;

    default:
      switch (n2){

        case 1:
          printf(" e um");
          break;

        case 2:
          printf(" e dois");
          break;

        case 3:
          printf(" e três");
          break;

        case 4:
          printf(" e quatro");
          break;

        case 5:
          printf(" e cinco");
          break;

        case 6:
          printf(" e seis");
          break;

        case 7:
          printf(" e sete");
          break;

        case 8:
          printf(" e oito");
          break;

        case 9:
          printf(" e nove");
          break;
      }
      break;
  }
  
  return 0;
}
