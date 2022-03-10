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
printf("size of the int: %d byte(s)", sizeof(intType));
printf("size of the float: %f byte(s)", sizeof(floatType));
printf("size of char: %c byte(s)", sizeof(charType));
printf("size of long int: %ld byte(s)", sizeof(longIntType));
printf("size of long long int: %lld byte(s)", sizeof(longlongIntType));
return (0);
}
