#include <stdio.h>

float potencia (int b, int e){ // Retirado do AFA 8.1

  float p = 1;

  if (e < 0){
    e = -e;
    for (int i = 1; i <= e; i++){
      p = p * b;
    }
    return 1 / p;
  }

  else {
    for (int i = 1; i <= e; i++){
      p = p * b;
    }
    return p;
  }
}


float poliN_ponto (float p){

  float x, c;
  char f;

  for (int g = 0; f != 'f'; g++){

    printf("Coeficiente do grau %d: ", g);
    scanf("%f%c", &c, &f);

    x = x + (c * potencia (p, g));
  }
  
  return x;
}


int main(void) {

  float p, x;
  
  printf("Ponto: ");
  scanf("%f", &p);

  x = poliN_ponto (p);
  printf("Resultado: %f", x);
  
  return 0;
}
