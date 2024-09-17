#include <stdio.h>
/**
 * main - print alphabet in lower case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
		{
			putchar(alph);
			alph++;
		}
	putchar('\n');
	return (0);
}
