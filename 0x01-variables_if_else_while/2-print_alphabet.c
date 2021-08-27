#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main function 
* Description of the program
* The program will print all lower case letters
*/

int main(void)
{
  char low;

  for(low = 'a'; low <= 'z'; low++)
    putchar(low);

    putchar('\n');

  return 0;
}
