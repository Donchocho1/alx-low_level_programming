#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{

	char i;
	for(i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}