/*
 * conversion.c
 *
 *  Created on: 7 sep. 2022
 *      Author: Brian Suarez
 */


#include "conversion.h"


float conversionCelsius(int numero)
{
	float respuesta;

	respuesta = (float)(numero * 9/5) + 32;

	return respuesta;
}

float conversionFahrenheit(int numero)
{
	float respuesta;

	respuesta = (float)(numero - 32) * 5/9;

	return respuesta;
}
