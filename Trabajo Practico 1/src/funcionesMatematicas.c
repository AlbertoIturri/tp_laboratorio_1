/*
 * funcionesMatematicas.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Alberto
 */

#include <stdio.h>
#include <stdlib.h>
#include "funcionesMatematicas.h"

int sumar(int a, int b)
{





    return a + b;
}

int restar(int a, int b)
{




    return a - b;
}

float dividir(int a, int b)
{



    return (float) a / b;
}

int multiplicar(int a, int b)
{






    return a * b;
}

int factorialA(int a)
{

    int factA= 1;

    for(int i = 1 ; i <= a ; i++)
    {

        factA = factA * i;
    }



    return factA;
}

int factorialB(int b)
{

    int factB= 1;

    for(int i = 1 ; i <= b ; i++)
    {

        factB = factB * i;
    }

    return factB;
}


