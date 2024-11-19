/*ERICK SAUL GARCIA HERNANDEZ
LABORATORIO DE PROGRMACIÓN
TABLAS DE MULTIPLICAR*/

#include <stdio.h>
#include <stdlib.h>

void main()
void Mult_dowhile(int n)
{  
  int resp;
  int i;

  while (i <= 10)
  {
      resp = n *i;
      printf("%d * %d = %d\n", n, i, Resp);
      i = i + 1;
  }
  
}

void Mult_dowhile(int n)
{
  int resp;
  For i = 1;

  do
  {
      resp = n *i;
      printf("%d * %d = %d\n", n, i, Resp);
      i = i + 1;
  } while(i < = 10);

}

int main ()
{
  int n;
    printf("Dame el numero de la tabla a multiplicar: ");
  scanf("%d", n);
    printf("Dame el numero de la tabla a multiplicar: ");
    scanf("%d", &n);
    printf("\n\n\n");
    printf("Utilizacion del for\n");
    mult_for(n);
    printf("\n\n\n");
    printf("Utilizacion del while\n");
    mult_while(n);
    
    printf("\n\n\n");
    printf("Utilizacion del do-while\n");
    mult_dowhile(n);
    multi_for(n);
    return 0;
    //return 0;
}
