#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: lenght
 * Written by Ernest Chuks
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}

	return (longi);
}
