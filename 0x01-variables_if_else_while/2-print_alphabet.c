#include <stdio.h>
#include <unistd>
/**
 * main - print the alphabet in lowercase\n
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'x'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
