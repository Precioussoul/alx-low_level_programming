#include <stdio.h>
/**
 *main - entry point
 *Return : 0;
 *write a function that takes pointer to an int as parameter and updates the values its point to to 98
 */
int reset_to_98(int *m)
{
*m = 98;
}
int main(void)
{
int n;
n = 402;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return(0);
}
