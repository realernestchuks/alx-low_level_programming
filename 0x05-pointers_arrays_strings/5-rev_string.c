#include "main.h"

/**
 * rev_string - function that reverss a string
 * @s: input string
 * Return: string in reverse
 * Written by Ernest Chuks
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}

}
