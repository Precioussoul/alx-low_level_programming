#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the value of two integers
 *
 * @a: - parameters
 * @b: - parameter representing a  value
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
