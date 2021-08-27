#include <stdio.h>
#include <time.h>

/**
* main - Entry point
* The program print Hex
* Return: Always 0 (Success)
*/

int main(void)
{
  int d;
  char a;

  for (d = '0'; d <= '9'; d++)
    putchar(d);
  for (a = 'a'; a <= 'f'; a++)
    putchar(a);
  putchar('\n');

  return 0;
}
