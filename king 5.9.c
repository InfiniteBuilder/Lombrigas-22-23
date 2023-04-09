#include <stdio.h>

int main(void) {

  int dd1, dm1, da1;
  int dd2, dm2, da2;
  int big = 0;

  printf("Data 1: ");
  scanf("%d/%d/%d", &dd1, &dm1, &da1);

  printf("Data 2: ");
  scanf("%d/%d/%d", &dd2, &dm2, &da2);

  if (da1 == da2){
    
    if (dm1 == dm2){
      
      if (dd1 == dd2){
        printf("É a mesma data");
        return 0;
      }
      else if (dd1 < dd2){
        big = 2;
      }
      else{
        big = 1;
      }
    }
      
    else if (dm1 < dm2){
      big = 2;
    }
    else{
      big = 1;
    }
  }

  else if (da1 < da2){
    big = 2;
  }
  else {
    big = 1;
  }

  //printf("Big: %d", big);

  if (big == 2){
    printf("%d/%d/%d vem antes de %d/%d/%d", dd1, dm1, da1,
                                             dd2, dm2, da2);  
  }
  else{
    printf("%d/%d/%d vem antes de %d/%d/%d", dd2, dm2, da2,
                                             dd1, dm1, da1);
  }
  
  return 0;
}
