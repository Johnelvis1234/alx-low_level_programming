#include "main.h"
/**
 * _islower - check for lowercase char
 * @c: is the char to be checked
 * Return: 1 if the char is in lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
