#include <stdio.h>
#include <string.h>

int main()
{
  char  nombre[200];
  char  otra_persona[4][200];

  int   agentes,
        tiempo   = 0,
        posicion = 0;

  scanf("%s", nombre);
  scanf("%d", &agentes);
  scanf("%s %s %s %s",
        otra_persona[0],
        otra_persona[1],
        otra_persona[2],
        otra_persona[3]);

  for(int x=0; x<4; x++)
  {
    if(strcmp(nombre, otra_persona[x])>0)
      posicion++;
  }

  tiempo = (posicion/agentes+1) * 20;

  printf("%d", tiempo);

  return 0;
}
