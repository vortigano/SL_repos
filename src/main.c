#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SOLOLEARN

static void get_input(char* destino)
{
  int count = 0;
  int caracter;
  while('\n' != (caracter = getc(stdin)))
  {
    destino[count++] = caracter;
  }
  destino[count]=0;
}

int main()
{
  //char  string_boxes[]  = "gold,diamonds,documents,Declaration of Independence,keys";
  //char  *string_target = "Declaration of Independence";
  char  string_boxes[200];
  char  string_target[200];

  #if defined(SOLOLEARN)
    scanf("%s[^\n\r]", string_boxes);
    scanf("%s[^\n\r]", string_target);
  #else
    get_input(string_boxes);
    get_input(string_target);
  #endif

  char  *delim = ",";
  char  *token;

  int   time = 0;
  //printf("BOXES:  %s\n", string_boxes);
  //printf("TARGET: %s\n", string_target);

  while( NULL != (token = strtok(string_boxes, delim)))
  {
    //printf("bucle externo\n");
    //printf("token = %s\n", token);
    time += 5;
    if(!strcmp(token, string_target)){ break; }
    while( NULL != (token = strtok(NULL, delim)) )
    {
      //printf("bucle interno\n");
      //printf("token = %s\n", token);
      time += 5;
      if(!strcmp(token, string_target)){ break; }
    }
    break;
  }
  printf("%d", time);
  //printf("time = %d\n", time);
  //printf("token: -%s-\n", token);

  return 0;
}
