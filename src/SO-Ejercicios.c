/*
 ============================================================================
 Name        : SO-Ejercicios.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

#include "Ejercicio1/Ejercicio1.h"



int main(void) {

	//Ejercicio 1
	char* nombre = "Pipa";
	char* saludo = string_concat("Hola ", nombre);
	puts(saludo);

	//Ej2
	char* nombre2 = "Carlos";
	char* saludo2;
	string_concat_dinamyc("Hola ", nombre2, &saludo2);
	puts(saludo2);

	//Ej3

	char* email = "dariolayme@gmail.com.ar";
	char* user;
	char* dominio;
	mail_split(email,&user,&dominio);

	puts(user);
	puts(dominio);
	puts(email);



	return EXIT_SUCCESS;
}



