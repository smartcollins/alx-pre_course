#include <stdio.h>
/**
 * main - prints numbers separated by ,
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 10)
	{
		putchar(num + '0');
			if (num == 9)
				break;
		putchar(',');
		putchar(' ');
		num++;
	}

	putchar('\n');
	return (0);
}
