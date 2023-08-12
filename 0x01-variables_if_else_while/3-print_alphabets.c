#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{

	char i;
	char f;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (f = 65; f <= 90; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
