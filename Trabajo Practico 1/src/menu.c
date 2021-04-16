/*
 * menu.c
 *
 *  Created on: 15 abr. 2021
 *      Author: Alberto
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int mostrarMenu(int flagMenu, int valorUno, int valorDos)
{

    int opcion;


    if(flagMenu == 0)
    {
        printf("**** Calculadora ****\n\n");
        printf("1. Ingresar 1er operando: (A=x)\n");
        printf("2. Ingresar 2do operando: (B=y)\n");
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);


    }


    if(flagMenu == 1)
    {

        printf("**** Calculadora ****\n\n");
        printf("1. Ingresar 1er operando: (A=%d)\n", valorUno);
        printf("2. Ingresar 2do operando: (B=y)\n");
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);



    }

    if(flagMenu == 2)
    {

        printf("**** Calculadora ****\n\n");
        printf("1. Ingresar 1er operando: (A=%d)\n", valorUno);
        printf("2. Ingresar 2do operando: (B=%d)\n", valorDos);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);


    }



    return opcion;
}



