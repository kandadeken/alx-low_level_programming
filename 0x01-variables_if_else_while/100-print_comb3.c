#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: always return 0
 */

int main(void)
{
int ch;
int n;
for (ch = 48; ch <= 57; ch++)
{
for (n = 49; n <= 57; n++)
{
if (n > ch)
{
putchar (ch);
putchar (n);
if (ch != 56 || n != 57)
{
putchar (44);
putchar(32);
}
}
}
}
return (0);
}
