#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"


int esNumero(char str[])
{
  int cont = 0;

    while(str[cont] != '\0')
    {
     if((str[cont]!='-'&&str[cont]!='.'&&str[cont]<'0'||str[cont]>'9'))
      {
        return 0;
      }
      cont++;
    }
  return 1;
}
int sumar(int a, int b)
{
    int resultado;
    resultado=a+b;
    return resultado;
}

int restar(int a, int b)
{
    int resultado;
    resultado=a-b;
    return resultado;
}
int multiplicar(int a, int b)
{
    int resultado;
    resultado=a*b;
    return resultado;
}
float dividir(int a, int b)
{
    float resultado;

    resultado=(float)a/b;
    return resultado;
}
int factorial(int a)
{
    if(a<1)
    {
        return 0;
    }else if(a>1)
    {
        return a*factorial(a-1);
    }else
    return 1;
}
