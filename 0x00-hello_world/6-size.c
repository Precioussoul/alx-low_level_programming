#include <stdio.h>
/**
 *main - main block
 *Return: 0
 */
int main(void)
{
int intType;
float floatType;
char charType;
long int longIntType;
long long int longlongIntType;
printf("size of the int: %d byte(s) \n", sizeof(intType));
printf("size of the float: %f byte(s) \n", sizeof(floatType));
printf("size of char: %c byte(s) \n", sizeof(charType));
printf("size of long int: %ld byte(s) \n", sizeof(longIntType));
printf("size of long long int: %lld byte(s) \n", sizeof(longlongIntType));
return (0);
}
