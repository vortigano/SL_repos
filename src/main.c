#include <stdio.h>

int main()
{
  int input;

  scanf("%d", &input);

  if(input > 10)
  {
    printf("High Five");
  }
  else if(input <1)
  {
    printf("shh");
  }
  else
  {
    // 1 <= input <= 10
    for(int x=0; x<input; x++)
    {
      printf("Ra!");
    }
  }

  return 0;
}
