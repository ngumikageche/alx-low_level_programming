/**
 *_pow_recursion- function that return x ^ y
 *@x:base
 *@y:exponent
 *Return:x^y if y > 0 and -1 if otherwise
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x  * _pow_recursion(x, y - 1));
}
