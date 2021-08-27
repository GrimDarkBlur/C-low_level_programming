#include <stdio.h>
#include <time.h>
/**
* main
* Descripton for the program
* The program prints lower case and Upper case letter
*/
int main(void)
{
  char lowUp;

  for (lowUp = 'a'; lowUp <= 'z'; lowUp++)
    putchar(lowUp);
  for (lowUp = 'A'; lowUp <= 'Z'; lowUp++)
    putchar(lowUp);
  return 0;
}
