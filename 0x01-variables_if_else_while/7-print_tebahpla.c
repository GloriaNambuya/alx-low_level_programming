#include <stdio.h>
/**
 * main - print letters in reverse
 *
 * Return: (0)
 *
 */
int main(void)
{
	char n = 'z';

	while (n >= 'a')
	{
		putchar(n--);
	}
	putchar('\n');
	return (0);
}
