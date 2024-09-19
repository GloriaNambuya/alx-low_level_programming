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
	char i = 'a';

	while (d <= '9')
	{
		putchar(d++);
	}

	while (i <= 'f')
	{
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
