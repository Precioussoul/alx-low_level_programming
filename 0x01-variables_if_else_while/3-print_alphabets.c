#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Return: 0;
 */
int main(void)
{
char upp;
char low;

upp = 'A';
low = 'a';
for (; low <= 'z'; low++)
{
putchar(low);
}
while (upp <= 'Z')
{
putchar(upp);
upp++;
}
putchar('\n');
return (0);
}
