#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* say(char*);

int main(void){
  char input[256];
  fgets(input, 256, stdin);

  char *output = say(input);
  printf("%s\n", output);
  //free(output);

  return 0;
}

char* say(char* input)
{
  char *output = malloc(256);
  int  offset = 0;
  for(char* palabra = strtok(input, " \n"); palabra!=NULL; palabra = strtok(NULL, " \n"))
  {
    sprintf(output+offset, "%s%cay ", palabra + 1, *palabra);
    offset = strlen(output);
  }


  return output;
}
