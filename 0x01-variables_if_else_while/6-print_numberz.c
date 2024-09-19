#include <stdio.h>
/**
 * main - print numbers without using char
 *
 * Return: (0)
 *
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n++);
	}
	putchar('\n');
	return (0);
}
