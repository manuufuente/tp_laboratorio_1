#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    char aux[10];
    int opcion;
    int flagA = 0;
    int flagB = 0;
    int flagOperaciones = 0;
    int a;
    int b;
    int suma;
    int resta;
    int multi;
    int facA;
    int facB;
    int auxNum;
    float div;

    while(seguir=='s')
    {   opcion=0;
        if(flagA==1)
            {
                printf("1- Ingresar 1er operando (A=%d)\n",a);
            }else{
                        printf("1- Ingresar 1er operando (A=x)\n");
                 }
        if(flagB)
            {
                printf("2- Ingresar 2do operando (B=%d)\n",b);
            }else{
                    printf("2- Ingresar 2do operando (B=y)\n");
                 }

        printf("3- Calcular todas las operaciones\n");
        printf("4- Informar resultados\n");
        printf("5- Salir\n");
        printf("\nIngrese una opcion: ");
        fflush(stdin);
        gets(aux);
        system("cls");

            if(esNumero(aux))
                {
                    auxNum=atoi(aux);
                }else{
                        printf("La opcion ingresada no es valida..\n\n");
                        system("pause");
                        system("cls");
                     }
            if(auxNum<10&&auxNum>0)
            {
                opcion=auxNum;
            }else{
                    printf("La opcion ingresada no es valida...\n\n");
                    system("pause");
                    system("cls");
                 }




        switch(opcion)
        {
        case 1:
            printf("Ingrese 1er operando: ");
            fflush(stdin);
            gets(aux);
            system ("cls");

            if(esNumero(aux))
                {
                    a=atoi(aux);
                    flagA = 1;
                }else{
                        printf("La opcion ingresada no es valida...\n\n");
                        system("pause");
                        system("cls");
                     }
                break;
        case 2:
            printf("Ingrese 2do operando: ");
            fflush(stdin);
            gets(aux);
            system("cls");

            if(esNumero(aux))
                {
                    b=atoi(aux);
                    flagB = 1;
                }else{
                        printf("La opcion ingresada no es valida...\n\n");
                        system("pause");
                        system("cls");
                     }
            break;

        case 3:

            if(flagA==1&&flagB==1)
            {
                suma=sumar(a,b);
                resta = restar(a,b);
                multi = multiplicar(a,b);
                div = dividir(a,b);
                facA = factorial(a);
                facB = factorial(b);
                flagOperaciones = 1;

                printf("Las operaciones se han realizado correctamente.");
                system ("pause");
                system ("cls");

            }else{
                    printf("No ha ingresado ambos numeros.");
                    system("pause");
                    system("cls");
                 }
              break;

        case 4:
            if(flagOperaciones==1)
            {
                printf("SUMA: %d\n",suma);
                printf("RESTA: %d\n",resta);
                printf("MULTIPLICAION: %d\n",multi);
                printf("DIVISION: %.2f\n",div);
                printf("FACTORIAL DE %d: %d\n",a,facA);
                printf("FACTORIAL DE %d: %d\n\n",b,facB);

                system("pause");
                system("cls");

            }else{
                    printf("No realizo ninguna operacion.");
                    system("pause");
                    system("cls");
                 }
            break;

        case 5:

                seguir = 'n';
                break;

        }

    }
return 0;
}
