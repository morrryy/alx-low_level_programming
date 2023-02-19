#include <stdio.h>
/**
 * main - prints the aphabet in revers'
 *
 * Return: Always 0 (success)
 */
int main(void)
	{
		int i = 122;

		while (i > 96)
		{
			putchar(i);
			i--;
		}
		putchar('\n');
		return (0);
	}
