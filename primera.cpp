/*****
* Nombre: primera.cpp
* Propósito: Aprender a mostrar una cadena de texto con la función printf en C
* Autor: Ander Conal
*****/

/*Importamos la librería stdio.h "standard input-output header"*/
#include <stdio.h>

/*Librería necesaria para utilizar la función system()*/
#include <stdlib.h>

/*Función llamada automáticamente cuando el programa es ejecutado. Devuelve un entero y no recibe argumentos*/
int main(void) 
{
	/*Utilizamos la función printf para mostrar el texto que deseamos*/
	printf("Aprendiendo C con Ander Conal. \n");
	/*Utilizamos \n "new-line character" para pasar a la siguiente línea*/
	printf("Learning C with Ander Conal.\n");

	/*Utilizamos esta función para que el programa no se cierre hasta que pulsemos una tecla*/
	system("pause");

	/*Indicamos que el programa termina de manera natural devolviendo el entero 0*/
	return 0;
}