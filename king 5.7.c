#include <stdio.h>

int main(void) {


  // Imagem explicativa da estrutura deste código: https://ibb.co/qLQbgZ8
  
  // Este programa inclui um módulo de teste! Esse módulo está desativado. Relembrem que código dentro de um comentário não é executado. Pode ser ignorado.
  

  int a, b, c, d, temp;
  /*int at, bt, ct, dt, pass;
  pass = 1;

  //testing module
  for (at = 1; at <= 4; at++){

    for (bt = 1; bt <= 4; bt++){

      for (ct = 1; ct <= 4; ct++){

        for (dt = 1; dt <= 4; dt++){

          a = at;
          b = bt;
          c = ct;
          d = dt;

          //printf("\nEntered loop.\n");

          if ((a != b) && (a != c) && (a != d) &&
              (b != c) && (b != d) && 
              (c != d)){

  printf("\nTesting %d %d %d %d\n", a, b, c, d);*/
            

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  //printf("\n%d %d %d %d\n", a, b, c, d);
  
  if (b > a){
    //troca a e b
    temp = a;
    a = b;
    b = temp;
  }
  //printf("%d %d %d %d\n", a, b, c, d);

  
  if (d > c){
    //troca c e d
    temp = c;
    c = d;
    d = temp;
  }
  //printf("%d %d %d %d\n", a, b, c, d);
  

  if (c > a){
    //troca a e c
    temp = a;
    a = c;
    c = temp;
  }
  //printf("%d %d %d %d\n", a, b, c, d);

  if (d > b){
    //troca b e d
    temp = b;
    b = d;
    d = temp;
  }
  //printf("%d %d %d %d\n", a, b, c, d);

  /*if (((a > b) && (a > c) && (a > d)) && ((b > d) && (c > d)))
    printf("\n- Passed -\n\n");
  else{
    printf("\n- Failed -\n\n");
    pass = 0;
    }

}}}}}

  if (pass == 1)
    printf("\n- Overall Passed -\n");
  else
    printf("\n- Overall Failed -\n");*/

  printf("Largest: %d\n", a);
  printf("Smalest: %d", d);

  return 0;

}
