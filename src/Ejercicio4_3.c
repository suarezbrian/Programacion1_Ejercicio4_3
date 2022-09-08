/*
 ============================================================================
 Name        : Ejercicio4_3.c
 Author      : Brian Alan Suarez
 Version     : Ejercicio4_2 - Tema 4
 Description :

Ejercicio 4-3: Realizar un programa que permita la carga de temperaturas en Celsius y
Fahrenheit, validando las temperaturas ingresadas estén entre el punto de congelación y de
ebullición del agua para cada tipo de escala. Las validaciones se hacen en una biblioteca. Las
funciones de conversión de Fahrenheit a Celsius y de Celsius a Fahrenheit se hacen en otra.

C = ebullicion 100, congelacion 0.
F = ebullicion 212, congelacion 32.
 ============================================================================
 */

#include "validaciones.h"
#include "conversion.h"

int main()
{
	setbuf(stdout, NULL);
	int numero;
	float conversion;
	char letra;

	letra = ingresarLetra();

	switch(letra)
	{
	case 'f':
		numero = ingresarNumero();
		numero = validarNumeroF(numero);
		conversion = conversionFahrenheit(numero);
		printf("\nEl numero %d °F es igual a : %.2f °C", numero, conversion);
		break;
	case 'c':
		numero = ingresarNumero();
		numero = validarNumeroC(numero);
		conversion = conversionCelsius(numero);
		printf("\nEl numero %d °C es igual a : %.2f °F", numero, conversion);
		break;
	}

	return 0;
}



