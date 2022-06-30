#include <stdio.h>
/**
 * main - multiplication of two integer positive number
 *
 * Return: product
 */
int main(void)
{
	int num1, num2;
	int mul = 0;

	printf("Enter two positive integer number: \n");
	scanf("%d %d", &num1, &num2);
	if (num1 <= 0 && num2 <= 0)
	{
		exit(98);
	}
	if (num1 == NULL && num2 == NULL)
	{
		exit(98);
	}

	while (num2 != 0)
	{
		mul += num1;
		num2--;
	}
	printf("\nProduct = %d\n", mul);
	return (mul);
}
