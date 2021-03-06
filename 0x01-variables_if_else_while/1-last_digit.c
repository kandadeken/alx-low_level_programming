#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time
 * it is executed and print the last digit of the
 * number stored in the variable n
 * Return: always return 0
 */

int main(void)
{
int n;
int i;

srand(time(0));
n = rand() - RAND_MAX / 2;
i = n % 10;

printf("Last digit of %d is %d and is ", n, i);
if (i > 5)
{
	printf("greater than 5");
}
if (i == 0)
{
	printf("0");
}
if (i < 6 && i != 0)
{
	printf("less than 6 and not 0");
}
printf("\n");

return (0);
}
