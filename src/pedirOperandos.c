/*
 * pedirOperandos.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Alberto
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirOperandos.h"

int pedirOperandoUno()
{

    int operandoUno;

    printf("Ingrese el primer operando: ");
    scanf("%d", &operandoUno);



    return operandoUno;
}

int pedirOperandoDos()
{

    int operandoDos;

    printf("Ingrese el segundo operando: ");
    scanf("%d", &operandoDos);


    return operandoDos;
}



