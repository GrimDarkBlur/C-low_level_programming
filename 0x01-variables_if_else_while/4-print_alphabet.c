#include <stdio.h>
#include <time.h>

/**
* main - Entry point
* The program print the alphabets without 'e' and 'q'
* Return: Always 0 (Success)
*/

int main(void)
{
  char low, e, q;
  e = 'e';
  q = 'q';

  for (low = 'a'; low <= 'z'; low++)
    {
      if (low !=e && low !=q)
	putchar(low);

    }
  return 0;
}