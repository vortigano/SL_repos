#include <stdio.h>
#include <math.h>

int main(){
  int houses;
  scanf("%d", &houses);

  //your code goes here

  float resultado = 2.f/houses * 100;

  printf("%d", (int)ceil(resultado) );

  return 0;
}
