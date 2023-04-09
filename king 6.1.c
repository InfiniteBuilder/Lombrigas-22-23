#include <stdio.h>

int main(void) {

  float n, m;
  char f;

  do{
    printf("Número: ");
    scanf("%f%c", &n, &f);
    //printf("Input successful");

    if (n > m){
      m = n;
    }
  }
  while (f != 'f');

  printf("Número maior: %f", m);
  
  return 0;
}
