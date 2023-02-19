#include <stdio.h>
/**
 * main- prints the alphabet in both uppercase and lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	while (i < 52)
	{
		putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
