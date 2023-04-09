// Este código foi editado pelo Senhor Capitão Silva, em resposta a uma dúvida que transcrevo:

/*
GS:
Senhor Capitão, como devemos fazer o teste da função? Há alguma biblioteca para usarmos, que faça potências diretamente?

DS:
Experimentas com vários valores e verificas que o resultado é correcto. 2^2 ->4 , 2^3 -> 8, 2^(-2)->1/4...

GS:
Manualmente, então. Pensei em fazer um loop como apresentei no 5.7 em comentário, por exemplo. Seria necessário uma função confiável para comparar.

DS:
Existem técnicas para fazer estes testes. Chama-se "unit tests". Existem bibliotecas que facilitam este procedimento. Se queres fazer algo mais automatizado, podes usar algo do género do que vou deixar escrito na tua solução.
Desta forma, o teu programa "normal" só executa depois dos testes básicos ("unit tests") passarem com sucesso. Isto é uma técnica extremamente útil e recomendada para garantir que as funcionalidades do programa funcionam como esperado. É uma técnica mais avançada, que não é preciso vocês usarem, mas também não é difícil de usar.
*/

#include <stdio.h>

float potencia (int b, int e){

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

unsigned char single_test(int b, int e, float esperado){
  if (potencia(b,e) != esperado){
    printf("potencia(%d,%d) -> %f, esperado %f", b, e, potencia(b,e),esperado);
    return 0;
  }
  return 1;
}

unsigned char tests_potencia(){
  // multiplicamos o resultado dos single_test (0 ou 1)
  // se todos os testes passarem, o resultado é 1
  return single_test(2, 2, 4.0) *
         single_test(2, 3, 8.0) *
         single_test(2, -2, 0.25);
}

int main(void) {

  int b, e;
  float p;

  if(tests_potencia() == 0){
    printf("testes não passaram.");
    return 1;
  }
  
  printf("Base: ");
  scanf("%d", &b);

  printf("Espoente: ");
  scanf("%d", &e);

  p = potencia (b, e);

  printf("Potencia: %f", p);  
  
  return 0;
}

