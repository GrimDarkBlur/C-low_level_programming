#include <stdlib.h>
/**
* main - Entry point
* Description: Print lowercase alphabets
*
* Return: always 0
*/
int main(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
