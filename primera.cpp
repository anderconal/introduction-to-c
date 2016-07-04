/*****
*ES_Nombre: primera.cpp
*EN_ Name: primera.cpp
*ES_Propósito: Aprender a mostrar una cadena de texto con la función printf en C
*EN_Purpose: Learn to display a string with the printf function on C
*ES_Autor: Ander Conal
*EN_Author: Ander Conal
*****/

/*ES_Importamos la librería stdio.h "standard input-output header"*/
/*EN_We import the library named stdio.h (standard input-output header)*/
#include <stdio.h>

/*ES_Librería necesaria para utilizar la función system()*/
/*EN_Necessary library for use the system() function*/
#include <stdlib.h>

/*ES_Función llamada automáticamente cuando el programa es ejecutado. Devuelve un entero y no recibe argumentos*/
/*EN_This function is automatically called when the program runs. Returns an integer and no arguments (void)*/
int main(void) 
{
	/*ES_Utilizamos la función printf para mostrar el texto que deseamos*/
	/*EN_We use the printf() function to display the desired text on screen*/
	printf("Aprendiendo C con Ander Conal. \n");
	/*ES_Utilizamos \n "new-line character" para pasar a la siguiente línea*/
	/*EN_We use the new-line character "\n" for go to the next line*/
	printf("Learning C with Ander Conal.\n");

	/*ES_Utilizamos esta función para que el programa no se cierre hasta que pulsemos una tecla*/
	/*EN_We use this function because we don´t want to close the program until a key is pressed*/
	system("pause");

	/*ES_Indicamos que el programa termina de manera natural devolviendo el entero 0*/
	/*EN_We indicate that the program terminates naturally returning the 0 integer*/
	return 0;
}
