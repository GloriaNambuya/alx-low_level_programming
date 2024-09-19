#include <stdio.h>
/**
 * main - print decimals with , and space
 *
 * Return: (0)
 *
 */
int main(void)
{
	int d = '0';
	
	while (d <= '9')
	{
		putchar(d);
		if (d <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');
	return (0);
}
