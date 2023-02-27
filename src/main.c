#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* say(char*);

int main(void){
  char input[256];
  fgets(input, 255, stdin);

  char *output = say(input);
  printf("%s\n", output);
  //free(output);

  return 0;
}

char* say(char* input)
{
  int index = 0;
  int len   = strlen(input);

  char* output = malloc(len + 2 + 1 + 512);

  char temp;
  char* p;
  char temp_str[256];
  char temp_str2[256];
  int temp_len = 0;

  p = strtok(input , " \n");
  if(p==NULL) return output;
  strcpy(temp_str, p);
  temp_len = strlen(temp_str);
  memset(temp_str2, 0, 100);
  temp = temp_str[0];
  int i;
  for(i = 0; i< temp_len -1; i++)
  {
      temp_str2[i]=temp_str[i+1];
  }
  temp_str2 [i] = temp;

  sprintf(&output[index], "%say ", temp_str2);
  index += temp_len +3;
  while(1){
    p = strtok(NULL, " \n");
    if(p==NULL) break;
    memset(temp_str2, 0, 100);
    strcpy(temp_str, p);
    temp_len = strlen(temp_str);
    temp = temp_str[0];
    for(i = 0; i< temp_len -1; i++)
    {
      temp_str2[i]=temp_str[i+1];
    }
    temp_str2 [i] = temp;
    sprintf(&output[index], "%say ", temp_str2);
    index += temp_len +3;
  };

  return output;
}
