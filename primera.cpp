/*****
* Nombre: primera.cpp
* Prop�sito: Aprender a mostrar una cadena de texto con la funci�n printf en C
* Autor: Ander Conal
*****/

/*Importamos la librer�a stdio.h "standard input-output header"*/
#include <stdio.h>

/*Librer�a necesaria para utilizar la funci�n system()*/
#include <stdlib.h>

/*Funci�n llamada autom�ticamente cuando el programa es ejecutado. Devuelve un entero y no recibe argumentos*/
int main(void) 
{
	/*Utilizamos la funci�n printf para mostrar el texto que deseamos*/
	printf("Aprendiendo C con Ander Conal. \n");
	/*Utilizamos \n "new-line character" para pasar a la siguiente l�nea*/
	printf("Learning C with Ander Conal.\n");

	/*Utilizamos esta funci�n para que el programa no se cierre hasta que pulsemos una tecla*/
	system("pause");

	/*Indicamos que el programa termina de manera natural devolviendo el entero 0*/
	return 0;
}