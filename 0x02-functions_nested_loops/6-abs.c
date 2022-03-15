#include "main.h"
/**
 * _abs - converts number to absolte
 *@c: The int to convert to absolute
 * Return: absolute value
 */

int _abs(int c)
{
if (c < 0)
{
int absVal = c + (c * -2);
return (absVal);
}

else
return (c);

}
