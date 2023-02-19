#include <stdio.h>
/**
 * main - prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
