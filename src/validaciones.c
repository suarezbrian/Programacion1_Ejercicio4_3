/*
 * validaciones.c
 *
 *  Created on: 7 sep. 2022
 *      Author: Brian Suarez
 */

#include "validaciones.h"

char validarLetra(char letra)
{
	while(letra != 'c' && letra != 'f')
	{
		fflush(stdin);
		printf("Error - Ingrese temperatura desea ingresar :\nF = 'Fahrenheit'\nC = 'Celsius' : ");
		scanf("%c", &letra);
	}

	return letra;
}

char ingresarLetra()
{
	char letra;

	fflush(stdin);
	printf("Que temperatura desea ingresar :\nF = 'Fahrenheit'\nC = 'Celsius' : ");
	scanf("%c", &letra);

	letra = validarLetra(letra);

	return letra;

}


int ingresarNumero()
{
	int numero;

	printf("Ingrese un numero : ");
	scanf("%d", &numero);

	return numero;
}

int validarNumeroC(int numero)
{
	while(numero < 0 || numero > 100)
	{
		printf("Error - Ingrese un numero valido C°(0-100) : ");
		scanf("%d", &numero);
	}

	return numero;
}

int validarNumeroF(int numero)
{
	while(numero < 32 || numero > 212)
	{
		printf("Error - Ingrese un numero valido F°(32-212) : ");
		scanf("%d", &numero);
	}

	return numero;
}



