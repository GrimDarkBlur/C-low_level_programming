#include <stdio.h>
#include <time.h>
/**
* Main
* Description of the code
* This program prints all the double combination of all the numbers bewteen 0 to 100
*/

int main(void)
{
  int d;

  for (d = 0; d < 100; d++)
    {
      putchar((d / 10) + '0');
      putchar((d % 10) + '0');
      if (d !=99)
	{
	  putchar(',');
	  putchar(' ');
	}
    }
  putchar('\n');

  return (0);
}
