#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int i;
char c;
long  li;
long long  lli;
float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
printf("Size of a long int: %ld byte(s)\n", (long)sizeof(li));
printf("Size of a long long int: %lld byte(s)\n", (long long)sizeof(lli));
printf("Size of a float: %f byte(s)\n", (float)sizeof(f));
return (0);
}
