#include <stdio.h>
#include <unistd.h>
/**
 *main - main block
 *Return: 1
 */
int main(void)
{
char wrd[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, wrd, sizeof(wrd));
return (1);
}
