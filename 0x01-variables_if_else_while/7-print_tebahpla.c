#include <stdio.h>
#include <time.h>
/**
* Main
* The program prints the 26 alphabets backwards
* Return; returns success
*/

int main(void)
{
  char num;

  for(num = 'z'; num >= 'a'; num--)
    putchar(num);
    putchar('\n');

  return 0;
}
