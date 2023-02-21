#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 * only use putchar twice in uour code
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}

