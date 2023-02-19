#include <stdio.h>
/**
 * main - prints single digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
	{
		int i = 0;

		while (i < 10)
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		return (0);
	}
