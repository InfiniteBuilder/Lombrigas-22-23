// Dúvida tirada com o Senhor Capitão Silva, descrita no fim do código.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void printMatrix (char a[10][10]){

  for (int i = 0; i < 10; i ++){
    
    for (int j = 0; j < 10; j ++){

      printf("%c ", a[i][j]);
    }

    printf("\n");
  }
}


int main(void) {

  char a[10][10];
  time_t t;

  for (int i = 0; i < 10; i ++){ // Pontos em toda a matriz
    
    for (int j = 0; j < 10; j ++){

      a[i][j] = '.';
    }
  }
  
  //printMatrix(a);

  srand((unsigned) time(&t));

  a[0][0] = 'A';

  int n, i = 0, j = 0, check;
  
  for (char c = 'B'; c <= 'Z'; c++){

    check = 0; // Número de "razões" para terminar o programa
      
    if (i == 0)                check++;
    else if (a[i-1][j] != '.') check++;
    if (i == 9)                check++;
    else if (a[i+1][j] != '.') check++;
    if (j == 0)                check++;
    else if (a[i][j-1] != '.') check++;
    if (j == 9)                check++;
    else if (a[i][j+1] != '.') check++;

    if (check == 4) break; // (Fechou sobre si próprio)
    
    while (1){ // Até encontrar posição válida. Break assinalado.
      
      n = rand() % 4;

      switch (n){
        case 0: // Cima
          i--;
          break;
        case 1: // Baixo
          i++;
          break;
        case 2: // Esquerda
          j--;
          break;
        case 3: // Direita
          j++;
          break;
      }

      if ((i >= 0) && (j >= 0) &&
          (i < 10) && (j < 10) &&
          (a[i][j] == '.')){

        a[i][j] = c;
        break; // <------------------------ Break
      }
        
      else{ // Repor posição válida
        
        switch (n){
          case 0:
            i++;
            break;
          case 1:
            i--;
            break;
          case 2:
            j++;
            break;
          case 3:
            j--;
            break;
        }
      }
    }
  }

  printMatrix(a);
  return 0;
}


/* 
GS:
Há alguma forma de declarar estas variáveis no "for" abaixo? (linha 39):

DS:
Negativo. A inicialização do for só suporta uma instrução. E numa instrução, só conseguimos declarar várias variáveis do mesmo tipo. O que podes fazer?

1. O c pode ser um int.
2. Como i e j nunca excedem 10, podem ser chars
3. Agora que já sabes estruturas, podias colocar essas variáveis todas numa struct temporária e local (não é considerada boa forma no C)
4. Deixa ficar como está.

O que eu recomendo? Deixa ficar como está. Pessoalmente gosto de ter no for o que controla o ciclo. E no teu caso, o que controla o ciclo é o c, e só o c. O i e o j controlam a indexação da matriz.

Como implementar o 3: for(struct {char c;int i;int j;} x ={.c='B',.i=0,.j=0}; x.c < 'Z' ; x.c++)

Boa Páscoa!
*/
