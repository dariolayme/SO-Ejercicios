#include <string.h>
#include "Ejercicio1.h"

char* string_concat(const char* cadena_destino,const char* cadena_fuente)
{
	//Pedimos la memoria suficiente para la cadena concatenada.
	char* string_concatenado = (char *)malloc(sizeof(cadena_fuente)+ sizeof(cadena_destino)+1);

	//Llenamos con la cadena_destino al string que acabamos de crear con malloc.
	strcpy(string_concatenado, cadena_destino);

	char* concat = strcat(string_concatenado,cadena_fuente);

	return concat;
}

void string_concat_dinamyc(const char* cadena1, const char* cadena2, char** cadena_concat)
{
	char* puntero_cadena_concat;
	puntero_cadena_concat = string_concat(cadena1, cadena2);
	*cadena_concat = puntero_cadena_concat;
}

void mail_split(const char* mail, char** user, char** dominio)
{
	//creamos punteros a Char con copia del Mail ya que el STRTOK modifica el primer parametro.
	char* copy_mail = strdup(mail);

	//Definimos el delimitador constante:
	char* delimitador = "@";

	char* puntero_user = strtok(copy_mail,delimitador);
	char* puntero_dominio = strtok(NULL,delimitador);

	*user = puntero_user;
	*dominio = puntero_dominio;

}
