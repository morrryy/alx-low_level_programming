#include <stdio.h>
/**
 * main- print the letters in the alphabet except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphas[24] = "abcdfghijklmnoprstuvwxyz";
	int y = 0;

	while (y < 24)
	{
		putchar(alphas[y]);
		y++;
	}
	putchar('\n');
	return (0);
}
