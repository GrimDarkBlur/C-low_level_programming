#include <stdio.h>
#include <time.h>
/**
* Main
* The program prints all base 10 numbers
* Return; returns success
*/

int main(void)
{
  char num;

  for(num = '0'; num <= '9'; num++)
    putchar(num);

  return 0;
}
