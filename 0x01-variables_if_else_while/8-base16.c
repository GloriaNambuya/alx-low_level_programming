#include <stdio.h>
/**
 * main - print hexadecimal
 *
 * Return: (0)
 *
 */
int main(void)
{
	char d = '0';
	char n = 'a';

	while (d <= '9')
	{
		putchar(d++);
	}
	while (n <= 'f')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
