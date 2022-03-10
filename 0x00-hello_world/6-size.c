#include <stdio.h>
/**
 *main - main block
 *Return: 0
 */
int main(void)
{
int intType,
float floatType,
char charType,
double doubleType,
printf("size of the int: %zu", sizeof(intType));
printf("size of the float: %zu", sizeof(floatType));
printf("size of char: %zu", sizeof(charType));
printf("size of double: %zu", sizeof(doubleType));
return (0);
}
