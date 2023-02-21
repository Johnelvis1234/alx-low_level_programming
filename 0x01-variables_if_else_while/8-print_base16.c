#include <stdio.h>
/**
 * main - print the number of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num <= 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
