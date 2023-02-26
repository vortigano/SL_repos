#include <stdio.h>

int pies(int*);

int main(){

  int fruit;
  scanf("%d", &fruit);

  //your code goes here
  printf("%d", pies(&fruit));
  return 0;
}

int pies(int *frutas)
{
  return( (*frutas/2)/3 );
}

