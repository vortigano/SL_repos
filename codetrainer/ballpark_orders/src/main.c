#include <stdio.h>
#include <string.h>
int main() {


  char input[512];

  scanf("%[^\n\r]", input);

  //printf("lolo");

  char *ptrword = strtok( input, " \n");

  float cuenta =0;
  float impuesto = 1.07;

  if(!strcmp(ptrword , "Water")){
   cuenta+= (4 );
  }else
  if(!strcmp(ptrword , "Cheeseburger")){
   cuenta+= (10);
  }else
  if(!strcmp(ptrword , "Nachos")){
   cuenta+= (6 );
   }else
  if(!strcmp(ptrword , "Pizza")){
   cuenta+= (6);
   }else
  if(!strcmp(ptrword , "Coke")){
   cuenta+= (5 );
  }else{
    cuenta +=5;
  }

  while(1)
  {
      //printf("%s\n", ptrword);
      ptrword = strtok( NULL, " \n");
      if(ptrword ==NULL) break;
      if(!strcmp(ptrword , "Water"))
      {
       cuenta+= (4 );
       continue;
      }else
      if(!strcmp(ptrword , "Cheeseburger")){
       cuenta+= (10);
       continue;
      }else
      if(!strcmp(ptrword , "Nachos")){
       cuenta+= (6 );
       continue;
       }else
      if(!strcmp(ptrword , "Pizza")){
       cuenta+= (6);
       continue;
       }else
      if(!strcmp(ptrword , "Coke")){
       cuenta+= (5 );
       continue;
       }else
       {
         cuenta +=5;
       }
  }
  cuenta *= impuesto;
  printf("%.2f", cuenta );
	return 0;
}
