#include <stdio.h>
#include "main.h"
/**
 * main- Entry Point
 *
 * Return: 0
 */
int main(void)
{
char ch[9] = "_putchar";
int i = 0;
while (i < 8)
{
printCharacter(ch[i]);
i++;
}
printCharacter('\n');
return (0);
}

