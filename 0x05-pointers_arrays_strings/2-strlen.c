#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: check char code
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0; /* start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
