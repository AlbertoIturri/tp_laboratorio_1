/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "pedirOperandos.h"
#include "menu.h"
#include "funcionesMatematicas.h"

int main(void)  {

	setbuf(stdout, NULL);

	char seguir = 's';
	    char respuesta;
	    int flagPrimerOpcion= 0;
	    int flagSegundaOpcion= 0;
	    int flagTercerOpcion= 0;
	    int flagMenu= 0;
	    int valorUno;
	    int valorDos;
	    int opcionElegida;


	    do
	    {
	        opcionElegida = mostrarMenu(flagMenu, valorUno, valorDos);
	        switch(opcionElegida)
	        {


	        case 1:

	            valorUno = pedirOperandoUno();
	            flagPrimerOpcion = 1;
	            flagMenu = 1;
	            system("pause");
	            break;




	        case 2:
	            if(flagPrimerOpcion)
	            {
	                valorDos = pedirOperandoDos();
	                flagSegundaOpcion = 1;
	                flagMenu = 2;



	            }
	            else
	            {

	                printf("Primero debe ingresar el primer operando.\n");

	            }
	            system("pause");
	            break;





	        case 3:

	            if(flagSegundaOpcion)
	            {

	                printf("Se han calculado las operaciones.\n");
	                flagTercerOpcion = 1;


	            }
	            else
	            {


	                printf("Primero debe ingresar los operandos.\n");


	            }
	            system("pause");
	            break;





	        case 4:

	            if(flagTercerOpcion)
	            {

	                printf("El resultado de A+B es: %d\n", sumar(valorUno, valorDos));
	                printf("El resultado de A-B es: %d\n", restar(valorUno, valorDos));
	                if(valorDos != 0)
	                {

	                    printf("El resultado de A/B es: %.2f\n", dividir(valorUno, valorDos));

	                }
	                else
	                {

	                    printf("No se puede dividir por 0\n");


	                }
	                printf("El resultado de A*B es: %d\n ", multiplicar(valorUno, valorDos));

	                if(valorUno < 0)
	                {

	                    printf("No se puede calcular el factorial de un numero negativo.\n");
	                }
	                else
	                {
	                    printf("El factorial de A es: %d\n", factorialA(valorUno));



	                }
	                if(valorDos < 0)
	                {

	                    printf("No se puede calcular el factorial de un numero negativo.\n");
	                }
	                else
	                {

	                    printf("El factorial de B es: %d\n", factorialB(valorDos));



	                }

	                flagPrimerOpcion = 0;
	                flagSegundaOpcion = 0;
	                flagTercerOpcion = 0;
	                flagMenu = 0;





	            }
	            else
	            {

	                printf("Primero debe realizar las operaciones.\n");



	            }
	            system("pause");

	            break;







	        case 5:


	            printf("Esta seguro de que desea salir?: ");
	            fflush(stdin);
	            scanf("%c", &respuesta);

	            if(respuesta == 's')
	            {

	                seguir = 'n';
	            }





	            break;



	        default:


	            printf("Opcion invalida.\n");
	            fflush(stdin);
	            system("pause");
	            break;








	        }





	    }
	    while(seguir == 's' );


	return EXIT_SUCCESS;
}
