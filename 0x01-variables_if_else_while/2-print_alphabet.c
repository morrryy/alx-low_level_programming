#include <stdio.h>
/**
 * main- prints all the letters in the alphabet in lowercase
 *
 * return: Always 0 (Success)
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
