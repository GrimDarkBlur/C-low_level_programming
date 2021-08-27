#include <stdio.h>
#include <time.h>
/**
* Main
* The program prints all base 10 numbers
* Return; returns success
*/

int main(void)
{
  int num;

  for(num = '0'; num <= '9'; num++)
    putchar(num);
  putchar('\n')

    return 0;
}
