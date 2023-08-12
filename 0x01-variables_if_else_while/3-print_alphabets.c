#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	int b = 97;

	int a;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	a = 65;
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
