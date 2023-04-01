#include <stdio.h>

int test_puedo_darles(int*, int* );

int main(){
  int siblings, popsicles;
  scanf("%d", &siblings);
  scanf("%d", &popsicles);

  //your code goes here
  switch(test_puedo_darles( &siblings, &popsicles))
  {
    case 1: puts("give away");
      break;
    case 0: puts("eat them yourself");
      break;
  }

  return 0;
}

int test_puedo_darles(int* sib, int* pop){
  //CUIDADO no se comprueba *sib == 0
  return((((*pop) % (*sib))==0)? (1):(0));
}
