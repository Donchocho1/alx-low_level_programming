#include <stdio.h>

/**
 * main - Entry point, a function that prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long   i, n;
unsigned long  sum;
n = 612852475143;

	while (n % 2 == 0)
	{
		sum = sum + 2;
		n = n / 2;
	}
	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			sum = sum + i;
			n = n / i;
		}
	}
printf("%lu\n", sum);
return (0);

}
