#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: (0)
 *
 */
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
