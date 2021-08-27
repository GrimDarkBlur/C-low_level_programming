#tdlib.h>
#include <time.h>
/**
* main - print the string in the put function
*
* Description: using the main function

* this program assign a new value to a varible 'n' and it will be indentifying if it is positive, negative or zeo
* Return: 0
*/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  if (n > 0)
    printf("%d is positive", n);
  else if (n == 0)
    printf("%d is zero", n);
  else
    printf("%d is negative", n);
  return (0);
}
