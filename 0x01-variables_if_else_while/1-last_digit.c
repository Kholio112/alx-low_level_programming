#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a C program to assign greater , smaller , equal to 5
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	dig = n % 10
	if (dig > 5)
		printf("Last digit of %i is %i and is greater than 5", n, dig);
	else if (dig == 0)
		printf("Last digit of %i is %i and is 0", n, dig);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0", n, dig);

	return (0);
}
